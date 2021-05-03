//#include <iostream>
//#include <cstring>
//using namespace std;
//
//bool poiskDaIliNet(char* massivBykv, char bykva)
//{
//    int i = 0;
//    while(massivBykv[i])
//    {
//        if(massivBykv[i]==bykva)
//        {
//            return true;
//            
//        }
//        i++;
//    }
//    return false;
//}
//
//string obrabotkaC(string inputStr)
//{
//    
//    char bykvi[] = {'e','i','y','\0'};
//    
//    
//    for(int kursor = 0; kursor < inputStr.length(); kursor++)
//    {
//        //        zabiraem sledyushii symbol
//        char nextSymbol = inputStr[kursor + 1];
//        //        delaem ego malenkim
//        nextSymbol = tolower(nextSymbol);
//        //        soderjetsa li v massive?
//        bool sledyshayaBykvaEIY = poiskDaIliNet(bykvi, nextSymbol);
//        
//        
//        if(inputStr[kursor] == 'c')
//        {
//            if(sledyshayaBykvaEIY)
//            {
//                inputStr[kursor] = 's';
//            }
//            else
//            {
//                inputStr[kursor] = 'k';
//            }
//        }
//        else if(inputStr[kursor] == 'C')
//        {
//            if(sledyshayaBykvaEIY)
//            {
//                inputStr[kursor] = 'S';
//            }
//            else
//            {
//                inputStr[kursor] = 'K';
//            }
//        }
//    }
//    return inputStr;
//}
//
//string obrabotkaQ(string inputStr)
//{
//    char bykva = 'u';
//    for(int kursor = 0; kursor < inputStr.length(); kursor++)
//    {
//        //        zabiraem sledyushii symbol
//        char nextSymbol = inputStr[kursor + 1];
//        //        delaem ego malenkim
//        nextSymbol = tolower(nextSymbol);
//        //        ta li eto bykva?
//        bool sledSimvolU = nextSymbol == bykva;
//        if (inputStr[kursor] == 'q')
//        {
//            inputStr[kursor] = 'k';
//            if(sledSimvolU)
//            {
//                inputStr[kursor + 1] = 'v';
//            }
//        }
//        if (inputStr[kursor] == 'Q')
//        {
//            inputStr[kursor] = 'K';
//            if(sledSimvolU)
//            {
//                inputStr[kursor + 1] = 'V';
//            }
//        }
//    }
//    return inputStr;
//    
//}
//
//string obrabotkaX(string inputStr)
//{
//    string result = "";
//    for(int kursor = 0; kursor < inputStr.length(); kursor++)
//    {
//        
//        if(inputStr[kursor] == 'x')
//        {
//            result.append("k");
//            result.append("s");
//            
//        }
//        else if(inputStr[kursor] == 'X')
//        {
//            result.append("K");
//            result.append("S");
//        }
//        else
//        {
//            string symvol = inputStr.substr(kursor, 1);
//            result.append(symvol);
//        }
//        
//        
//        
//    }
//    return result;
//}
//
//string obrabotkaW(string inputStr)
//{
//    
//    for(int kursor = 0; kursor < inputStr.length(); kursor++)
//    {
//        if(inputStr[kursor] == 'w')
//        {
//            inputStr[kursor] = 'v';
//        }
//        
//        else if(inputStr[kursor] == 'W')
//        {
//            inputStr[kursor] = 'V';
//        }
//        
//    }
//    return inputStr;
//}
//
//string obrabotkaPH(string inputStr)
//{
//    string result = "";
//    for(int kursor = 0; kursor < inputStr.length() ; kursor++)
//    {
//        if((inputStr[kursor] == 'p' && inputStr[kursor + 1] == 'h') || (inputStr[kursor] == 'p' && inputStr[kursor + 1] == 'H') )
//        {
//            
//            result.append("f");
//            kursor++;
//            
//        }
//        else if((inputStr[kursor] == 'P' && inputStr[kursor + 1] == 'H') || (inputStr[kursor] == 'P' && inputStr[kursor + 1] == 'h') )
//        {
//            
//            result.append("F");
//            kursor++;
//            
//        }
//        else
//        {
//            string symvol = inputStr.substr(kursor, 1);
//            result.append(symvol);
//        }
//    }
//    return result;
//}
//
//string obrabotkaYOU(string inputStr)
//{
//    string result = "";
//    
//    for(int kursor = 0; kursor < inputStr.length() ; kursor++)
//    {
//        
//        if(inputStr[kursor] == 'y' && inputStr[kursor + 1] == 'o' &&  inputStr[kursor + 2] == 'u' )
//        {
//            result.append("u");
//            kursor += 2;
//            
//        }
//        else if((inputStr[kursor] == 'Y' && inputStr[kursor + 1] == 'O' &&  inputStr[kursor + 2] == 'U') || (inputStr[kursor] == 'Y' && inputStr[kursor + 1] == 'o' &&  inputStr[kursor + 2] == 'u') )
//        {
//            result.append("U");
//            kursor += 2;
//        }
//        else
//        {
//            string symvol = inputStr.substr(kursor, 1);
//            result.append(symvol);
//        }
//    }
//    return result;
//}
//
//string obrabotkaOO(string inputStr)
//{
//    string result = "";
//    
//    for(int kursor = 0; kursor < inputStr.length() ; kursor++)
//    {
//        if((inputStr[kursor] == 'o' && inputStr[kursor + 1] == 'o') ||(inputStr[kursor] == 'o' && inputStr[kursor + 1] == 'O'))
//        {
//            result.append("u");
//            kursor ++;
//            
//        }
//        else if((inputStr[kursor] == 'O' && inputStr[kursor + 1] == 'O') ||(inputStr[kursor] == 'O' && inputStr[kursor + 1] == 'o'))
//        {
//            result.append("U");
//            kursor ++;
//        }
//        else
//        {
//            string symvol = inputStr.substr(kursor, 1);
//            result.append(symvol);
//        }
//    }
//    return result;
//}
//
//string obrabotkaEE(string inputStr)
//{
//    string result = "";
//    
//    for(int kursor = 0; kursor < inputStr.length() ; kursor++)
//    {
//        if((inputStr[kursor] == 'e' && inputStr[kursor + 1] == 'e') || (inputStr[kursor] == 'e' && inputStr[kursor + 1] == 'E'))
//        {
//            result.append("i");
//            kursor ++;
//            
//        }
//        else if((inputStr[kursor] == 'E' && inputStr[kursor + 1] == 'E') || (inputStr[kursor] == 'E' && inputStr[kursor + 1] == 'e'))
//        {
//            result.append("I");
//            kursor ++;
//        }
//        else
//        {
//            string symvol = inputStr.substr(kursor, 1);
//            result.append(symvol);
//        }
//    }
//    return result;
//}
//
//string obrabotkaTH(string inputStr)
//{
//    string result = "";
//    for(int kursor = 0; kursor < inputStr.length() ; kursor++)
//    {
//        if(inputStr[kursor] == 't' && inputStr[kursor + 1] == 'h' )
//        {
//            
//            result.append("z");
//            kursor++;
//            
//        }
//        else if((inputStr[kursor] == 'T' && inputStr[kursor + 1] == 'H')|| (inputStr[kursor] == 'T' && inputStr[kursor + 1] == 'h') )
//        {
//            
//            result.append("Z");
//            kursor++;
//            
//        }
//        else
//        {
//            string symvol = inputStr.substr(kursor, 1);
//            result.append(symvol);
//        }
//    }
//    return result;
//}
//
//string obrabotkaDuplicates(string inputStr)
//{
//    string result = "";
//    string povtor = "";
//    int kursor = 0;
//    
//    for(kursor = 0; kursor < inputStr.length() ; kursor++)
//    {
//        if(inputStr[kursor] == inputStr[kursor + 1])
//        {
//            povtor = inputStr[kursor];
//            
//            result.append(povtor);
//            kursor ++;
//            
//        }
//        else
//        {
//            string symvol = inputStr.substr(kursor, 1);
//            result.append(symvol);
//        }
//    }
//    return result;
//}
//
//int main()
//{
//    string userInputStr;
//    cout << "Input string: ";
//    getline(cin, userInputStr);
//    cout << endl;
//    userInputStr = obrabotkaC(userInputStr);
//    userInputStr = obrabotkaQ(userInputStr);
//    userInputStr = obrabotkaX(userInputStr);
//    userInputStr = obrabotkaW(userInputStr);
//    userInputStr = obrabotkaPH(userInputStr);
//    userInputStr = obrabotkaYOU(userInputStr);
//    userInputStr = obrabotkaOO(userInputStr);
//    userInputStr = obrabotkaEE(userInputStr);
//    userInputStr = obrabotkaTH(userInputStr);
//    userInputStr = obrabotkaDuplicates(userInputStr);
//    cout <<"Output string: "<<userInputStr<<endl;
//    cout << endl;
//    return 0;
//}
