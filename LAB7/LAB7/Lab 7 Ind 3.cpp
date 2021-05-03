//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int razrjadnost = 8;
//
//int strokadlina(char *s)
//{
//    int i;
//    for (i = 0; s[i] != '\0'; i++);
//    return i;
//}
//
//
//bool proverka (char* inputStr)
//{
//    for(int kursor = 0; kursor < strokadlina(inputStr); kursor++)
//    {
//        if (kursor == 0 && (inputStr[kursor] == '0' || inputStr[kursor] == '1' || inputStr[kursor] == '-'))
//        {
//            
//        }
//        else if(inputStr[kursor] == '0' || inputStr[kursor] == '1')
//        {
//            
//        }
//        else
//        {
//            cerr << "Error, in position "<<kursor + 1<<" wrong number."<<endl;
//            return false;
//        }
//    }
//    return  true;
//}
//
//void perevodKodaObr(char* inputStr, bool trueObr)
//{
//    
//    if (inputStr[0] == '1')
//    {
//        for(int kursor = 1; kursor < strokadlina(inputStr);kursor++)
//        {
//            if(inputStr[kursor] == '1')
//            {
//                inputStr[kursor] = '0';
//            }
//            else if(inputStr[kursor] == '0')
//            {
//                inputStr[kursor] = '1';
//            }
//        }
//        if (trueObr)
//        {
//            cout << "Obratnii: "<< inputStr<<endl;
//        }
//        else
//        {
//            cout << "Pryamoi iz obratnogo: "<< inputStr<<endl;
//        }
//        
//        
//    }
//    else
//    {
//        if (trueObr)
//        {
//            cout << "Obratnii: "<< inputStr<<endl;
//        }
//        else
//        {
//            cout << "Pryamoi iz obratnogo: "<< inputStr<<endl;
//        }
//        
//    }
//}
//
//void perevodDop(char* inputStr)
//{
//    if (inputStr[0] == '1')
//    {
//        
//        if (inputStr[strokadlina(inputStr) - 1] == '0')
//        {
//            inputStr[strokadlina(inputStr) - 1] = '1';
//        }
//        else
//        {
//            bool razradNaSledBit = false;
//            for (int i = strokadlina(inputStr) - 1; i >= 1; i--)
//            {
//                if (razradNaSledBit && inputStr[i] == '0') {
//                    razradNaSledBit = false;
//                    inputStr[i] = '1';
//                    break;
//                } else if (inputStr[i] == '1')
//                {
//                    inputStr[i] = '0';
//                    razradNaSledBit = true;
//                }
//            }
//        }
//        
//        cout << "Dopolnitelnii: "<< inputStr<<endl;
//    }
//    else
//    {
//        cout << "Dopolnitelnii: "<< inputStr<<endl;
//    }
//}
//
//void perevodIZDop(char* inputStr)
//{
//    if (inputStr[0] == '1')
//    {
//        
//        if (inputStr[strokadlina(inputStr) - 1] == '1')
//        {
//            inputStr[strokadlina(inputStr) - 1] = '0';
//        }
//        else
//        {
//            bool razradSoSledBit = false;
//            for (int i = strokadlina(inputStr) - 1; i >= 1; i--)
//            {
//                if (inputStr[i] == '0') {
//                    razradSoSledBit = true;
//                    inputStr[i] = '1';
//                } else if (razradSoSledBit && inputStr[i] == '1')
//                {
//                    inputStr[i] = '0';
//                    razradSoSledBit = false;
//                    break;
//                }
//            }
//        }
//        
//        cout << "Obr iz DOP koda: "<< inputStr<<endl;
//    }
//    else
//    {
//        cout << "Obr iz DOP koda: "<< inputStr<<endl;
//    }
//}
//
//
//char* perevodV8B(char* inputStr)
//{
//    char* rabochiiMassiv1 = new char [razrjadnost];
//    
//    char* inputStr1ProperPointer = inputStr;
//    
//    if(inputStr1ProperPointer[0] == '-')
//    {
//        inputStr1ProperPointer = &inputStr1ProperPointer[1];
//    }
//    
//    for (int kursor = 0, i = 0; kursor < razrjadnost; kursor++)
//    {
//        if (kursor == 0 && inputStr[0] == '-')
//        {
//            rabochiiMassiv1[kursor] = '1';
//        }
//        else if (kursor < razrjadnost - strokadlina(inputStr1ProperPointer))
//        {
//            rabochiiMassiv1[kursor] = '0';
//        }
//        else
//        {
//            rabochiiMassiv1[kursor] = inputStr1ProperPointer[i];
//            i++;
//        }
//    }
//    rabochiiMassiv1[razrjadnost] = '\0';
//    cout << "Uvelichenoe do "<< razrjadnost << " razryadov: " << rabochiiMassiv1<<endl;
//    
//    return rabochiiMassiv1;
//}
//
//char* slojenie(char* inputStr1, char* inputStr2)
//{
//    char* outputStr = new char [razrjadnost+2];
//    bool snosBitNaSAled = false;
//    for(int kursor = razrjadnost-1; kursor >= 0; kursor--)
//    {
//        int i1 = inputStr1[kursor] == '0' ? 0 : 1;
//        int i2 = inputStr2[kursor] == '0' ? 0 : 1;
//        
//        switch (i1+i2) {
//            case 0:
//                if (snosBitNaSAled)
//                {
//                    outputStr[kursor] = '1';
//                    snosBitNaSAled = false;
//                }
//                else
//                {
//                    outputStr[kursor] = '0';
//                }
//                break;
//            case 1:
//                if (snosBitNaSAled)
//                {
//                    outputStr[kursor] = '0';
//                    snosBitNaSAled = true;
//                }
//                else
//                {
//                    outputStr[kursor] = '1';
//                }
//                break;
//            case 2:
//                if (snosBitNaSAled)
//                {
//                    outputStr[kursor] = '1';
//                    snosBitNaSAled = true;
//                }
//                else
//                {
//                    outputStr[kursor] = '0';
//                    snosBitNaSAled = true;
//                }
//                break;
//        }
//    }
//    outputStr[razrjadnost] = '\0';
//    cout << "Result slojenia v DOP kode: "<<outputStr<<endl;
//    return outputStr;
//    
//}
//
//int main()
//{
//    char* inputStr1 = new char [razrjadnost+2];
//    char* inputStr2 = new char [razrjadnost+2];
//    
//    cout << "Your 1 number: ";
//    cin.getline(inputStr1,razrjadnost+1);
//    
//    if(proverka(inputStr1) == false)
//    {
//        return 228;
//    }
//    inputStr1 = perevodV8B(inputStr1);
//    
//    perevodKodaObr(inputStr1,true);
//    perevodDop(inputStr1);
//    cout << endl;
//    
//    cout << "Your 2 number: ";
//    cin.getline(inputStr2,9);
//    
//    if(proverka(inputStr2) == false)
//    {
//        return 228;
//    }
//    inputStr2 = perevodV8B(inputStr2);
//    
//    perevodKodaObr(inputStr2,true);
//    perevodDop(inputStr2);
//    
//    cout << endl;
//    
//    
//    char* outputStr = slojenie(inputStr1, inputStr2);
//    
//    
//    perevodIZDop(outputStr);
//    perevodKodaObr(outputStr,false);
//    
//    return 0;
//}
