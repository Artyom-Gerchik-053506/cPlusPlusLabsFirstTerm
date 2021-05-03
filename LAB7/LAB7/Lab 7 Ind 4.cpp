//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//char proverkaStr[] = "0123456789ABCD";
//char proverkaZnak[] = "+-";
//
//
//int strokadlina(char *s)
//{
//    int i;
//    for (i = 0; s[i] != '\0'; i++);
//    return i;
//}
//
//char* dobavitChar(char* ishodnajaStroka,  char dobovlyarmiiChar)
//{
//    char *gotovayastroka = ishodnajaStroka;
//    ishodnajaStroka = &gotovayastroka[strokadlina(gotovayastroka)];
//    *ishodnajaStroka = dobovlyarmiiChar;
//    ishodnajaStroka++;
//    *ishodnajaStroka = '\0';
//    return gotovayastroka;
//}
//
//char* dobavitStroku(char* ishodnajaStroka, const char* dobovlyaemayaStroka)
//{
//    char *gotovayastroka = ishodnajaStroka;
//    ishodnajaStroka = &gotovayastroka[strokadlina(gotovayastroka)];
//    while (*dobovlyaemayaStroka) {
//        *ishodnajaStroka = *dobovlyaemayaStroka;
//        ishodnajaStroka++;
//        dobovlyaemayaStroka++;
//    }
//
//    *ishodnajaStroka = '\0';
//    return gotovayastroka;
//}
//
//int position(char lookingChar)
//{
//    for (int kursor = 0; kursor< strokadlina(proverkaStr); kursor++)
//    {
//        if (proverkaStr[kursor] == lookingChar)
//        {
//            return kursor;
//        }
//    }
//    return INT8_MAX;
//}
//
//char vichitanieV14(char inputStr1, char inputStr2, bool* perenosRazriada)
//{
//    int postion1 = position(inputStr1); // D -> 13
//    int postion2 = position(inputStr2); // 3 -> 3
//
//    if(postion1 < postion2)
//    {
//        postion1 += strokadlina(proverkaStr);
//        *perenosRazriada = true;
//
//    }
//    else
//    {
//        *perenosRazriada = false;
//    }
//    int resultVichisleniya = postion1 - postion2;
//
//    return proverkaStr[resultVichisleniya];
//
//}
//
//char priamoeVichitanieV14(char inputStr1, char inputStr2, bool *otrizatelnoe)
//{
//    int postion1 = position(inputStr1); // D -> 13
//    int postion2 = position(inputStr2); // 3 -> 3
//
//    int resultVichisleniya = postion1 - postion2;
//    if (resultVichisleniya < 0) {
//        *otrizatelnoe = true;
//    } else
//    {
//        *otrizatelnoe = false;
//    }
//
//    resultVichisleniya = abs(resultVichisleniya);
//
//    return proverkaStr[resultVichisleniya];
//
//}
//
//char slojiV14(char inputStr1, char inputStr2, bool* perenosRazriada)
//{
//    int postion1 = position(inputStr1); // D -> 13
//    int postion2 = position(inputStr2); // 3 -> 3
//
//    int result = postion1 + postion2; // 16
//    if (result >= strokadlina(proverkaStr))
//    {
//        *perenosRazriada = true;
//        result = result - strokadlina(proverkaStr); // 2
//    } else {
//        *perenosRazriada = false;
//    }
//
//    return proverkaStr[result];
//}
//
////int sistemaSchislenia = strokadlina(proverkaStr);
//
//bool validnostCharZnak(char inputChar)
//{
//    for(int kursor = 0; kursor < strokadlina(proverkaZnak); kursor++)
//    {
//        if (proverkaZnak[kursor] == inputChar)
//        {
//            return true;
//        }
//    }
//    return false;
//
//}
//
//bool validnostZnak(char znak)
//{
//    for(int kursor = 0; kursor < 1; kursor++)
//    {
//        if (validnostCharZnak(znak) == false )
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//
//bool validnostChar(char inputChar)
//{
//    for(int kursor = 0; kursor < strokadlina(proverkaStr); kursor++)
//    {
//        if (proverkaStr[kursor] == inputChar)
//        {
//            return true;
//        }
//    }
//    return false;
//
//}
//
//bool validnostStr(char* inputStr)
//{
//    for(int kursor = 0; kursor < strokadlina(inputStr); kursor++)
//    {
//        //proverka znaka ili char
//        if(kursor == 0)
//        {
//            if((validnostChar(inputStr[kursor]) || validnostCharZnak(inputStr[kursor])) == false)
//            {
//                return false;
//            }
//        }
//
//        else if (validnostChar(inputStr[kursor]) == false )
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//char* uvelichitStroku(char* stroka, int dlina)
//{
//    //    if(strokadlina(stroka) == dlina)
//    //    {
//    //        return stroka;
//    //    }
//
//    int tekushyayaDlina = strokadlina(stroka);
//    //    cout <<"tekushayadlonasdns: " << tekushyayaDlina<< endl;
//    char* novayaStroka = new char [dlina];
//    for(int kursor = 0;  kursor < dlina - tekushyayaDlina; kursor++)
//    {
//        novayaStroka[kursor] = '0';
//    }
//    novayaStroka[dlina - tekushyayaDlina] = '\0';
//    dobavitStroku(novayaStroka, stroka);
//    cout <<"Stroka dopolnenanylyami: "<<novayaStroka<<endl;
//    return novayaStroka;
//
//}
//
//bool estVozmojnostSnjatRazriadNextChar(int kursor, char *inputStr)
//{
//
//    int postion1 = position(inputStr[kursor]); // D -> 13
//    if (postion1 > 0) {
//        return true;
//    }
//    return false;
//}
//
//bool estVozmojnostSnjatRazriadPolnajaStr(int kursor, char *inputStr)
//{
//    for (int i = kursor; i >= 0; i--) {
//        if (estVozmojnostSnjatRazriadNextChar(i, inputStr)) {
//            return true;
//        }
//    }
//    return false;
//}
//
////long int intToDesyat(char* chislo)
////{
////    long int desyat = 0;
////    for(int kursor = strokadlina(chislo); kursor > 0; kursor--)
////    {
////        int stepenPyoterki = pow(strokadlina(proverkaStr), (strokadlina(chislo) - kursor));
////        int charToInt = position(chislo[kursor - 1]);
////        desyat += charToInt * stepenPyoterki;
////    }
////    cout <<"Chislo v desyatichoi systeme: "<<desyat<<endl;
////    return desyat;
////}
//
//bool bolshe(char *inputStr1, char *inputStr2)
//{
//    for(int kursor = 0; kursor < strokadlina(inputStr1); kursor++)
//    {
//        if(position(inputStr1[kursor]) > position(inputStr2[kursor]))
//        {
//            return true;
//        }
//        else if (position(inputStr2[kursor]) > position(inputStr1[kursor]))
//        {
//            return false;
//        }
//    }
//    return false;
//}
//
//int main()
//{
//    char* inputStr1 = new char[101];
//    char* inputStr2 = new char[101];
//    char znak;
//
//    bool pervoeChisloOtricatelnoe = false;
//    bool vtoroeChisloOtricatelnoe = false;
//    bool otrizatelnoeGlobal = false;
//
//
//
//    cout<<"Pervaya cifra: ";
//    cin.getline(inputStr1,100);
//    if(validnostStr(inputStr1) == false)
//    {
//        cout << "Invalid string."<<endl;
//        return 228;
//
//    }
//
//
//    cout << "Vtoraya cifra: ";
//    cin.getline(inputStr2,100);
//    if(validnostStr(inputStr2) == false)
//    {
//        cout << "Invalid string."<<endl;
//        return 228;
//
//    }
//
//    cout << endl;
//    cout <<"Znak operacii: ";
//    cin >> znak;
//
//    if(validnostZnak(znak) == false)
//    {
//        cout << "Invalid znak."<<endl;
//        return 228;
//
//    }
//    cout << endl;
//
//
//    if(inputStr1[0] == '-' || inputStr1[0] == '+')
//    {
//
//        if(inputStr1[0] == '-')
//        {
//            pervoeChisloOtricatelnoe = true;
//        }
//        else
//        {
//            pervoeChisloOtricatelnoe = false;
//        }
//        inputStr1++;
//    }
//
//    if(inputStr2[0] == '-' || inputStr2[0] == '+')
//    {
//        if(inputStr2[0] == '-' && znak == '-')
//        {
//            znak = '+';
//            vtoroeChisloOtricatelnoe = false;
//        }
//        else if (inputStr2[0] == '-')
//        {
//            znak = '+';
//            vtoroeChisloOtricatelnoe = true;
//
//        }
//        inputStr2++;
//    }
//
//    int dlina1 = strokadlina(inputStr1);
//    int dlina2 = strokadlina(inputStr2);
//    int dlinaMax = max(dlina1, dlina2) + 4;
//
//    //    cout <<"dlinamax: "<< dlinaMax<< endl;
//
//    inputStr1 = uvelichitStroku(inputStr1, dlinaMax);
//    inputStr2 = uvelichitStroku(inputStr2, dlinaMax);
//
//    if(znak == '+' && pervoeChisloOtricatelnoe && !vtoroeChisloOtricatelnoe)
//    {
//        znak = '-';
//    }
//    else if(znak == '+' && !pervoeChisloOtricatelnoe && vtoroeChisloOtricatelnoe)
//    {
//        znak = '-';
//    }
//    else if(znak =='+' && pervoeChisloOtricatelnoe && vtoroeChisloOtricatelnoe)
//    {
//        otrizatelnoeGlobal = true;
//    }
//    else if(znak == '-' && pervoeChisloOtricatelnoe && !vtoroeChisloOtricatelnoe)
//    {
//        znak = '+';
//        otrizatelnoeGlobal = true;
//    }
//    else if(znak == '-' && !pervoeChisloOtricatelnoe && vtoroeChisloOtricatelnoe)
//    {
//        znak = '+';
//    }
//    else if(znak == '-' && pervoeChisloOtricatelnoe && vtoroeChisloOtricatelnoe)
//    {
//        znak = '-';
//    }
//
//    cout <<"Itogovii znak operacii: "<<znak<<endl;
//
//    char* outputStr = new char [dlinaMax];
//
//
//    if(znak == '-')
//    {
//
//        //        long int chislo1 = intToDesyat(inputStr1);
//        //        long int chislo2 = intToDesyat(inputStr2);
//
//        //        if (chislo1 < chislo2)
//        if (bolshe(inputStr2, inputStr1))
//        {
//            // kogda 2 otr i znak otr = polozhitel
//            if (pervoeChisloOtricatelnoe && !vtoroeChisloOtricatelnoe)
//            {
//                otrizatelnoeGlobal = false;
//            }
//            else if(!pervoeChisloOtricatelnoe && vtoroeChisloOtricatelnoe)
//            {
//                otrizatelnoeGlobal = true;
//            }
//            else if(!pervoeChisloOtricatelnoe && !vtoroeChisloOtricatelnoe)
//            {
//                otrizatelnoeGlobal = true;
//            }
//            //skoree vsego nikogda ne zaidet suda
//            else if(pervoeChisloOtricatelnoe && vtoroeChisloOtricatelnoe)
//            {
//                otrizatelnoeGlobal = false;
//            }
//            char* promejutok = new char [dlinaMax];
//            promejutok = dobavitStroku(promejutok, inputStr1);
//            inputStr1 = inputStr2;
//            inputStr2 = promejutok;
//
//        } else {
//            // kogda 2 otr i znak otr = polozhitel
//            if (pervoeChisloOtricatelnoe && !vtoroeChisloOtricatelnoe)
//            {
//                otrizatelnoeGlobal = true;
//            }
//            else if(!pervoeChisloOtricatelnoe && vtoroeChisloOtricatelnoe)
//            {
//                otrizatelnoeGlobal = false;
//            }
//            else if(!pervoeChisloOtricatelnoe && !vtoroeChisloOtricatelnoe)
//            {
//                otrizatelnoeGlobal = false;
//            }
//            //skoree vsego nikogda ne zaidet suda
//            else if(pervoeChisloOtricatelnoe && vtoroeChisloOtricatelnoe)
//            {
//                otrizatelnoeGlobal = true;
//            }
//        }
//
//        cout << "InputSTR1FLIPPED: " << inputStr1<< endl;
//        cout << "InputSTR2FLIPPED: " << inputStr2<< endl;
//
//
//        bool zabratRazrjiad = false;
//
//        for(int kursor = dlinaMax - 1; kursor >= 0; kursor--)
//        {
//            if (kursor > 0 && estVozmojnostSnjatRazriadPolnajaStr(kursor - 1, inputStr1)) {
//
//                outputStr[kursor] = vichitanieV14(inputStr1[kursor], inputStr2[kursor], &zabratRazrjiad);
//
//                if(zabratRazrjiad)
//                {
//                    bool zabratRazrjiadSoSledChisla = false;
//                    for(int razryadKursor = kursor - 1; razryadKursor >= 0; razryadKursor --)
//                    {
//
//                        inputStr1[razryadKursor] = vichitanieV14(inputStr1[razryadKursor], '1', &zabratRazrjiadSoSledChisla);
//
//                        if(zabratRazrjiadSoSledChisla == false) // ne zabirali
//                        {
//                            break; // to vihod
//                        } else if (razryadKursor == 0)// eto poslednij razrjad
//                        {
//                            otrizatelnoeGlobal = true;
//                        }
//
//                    }
//                }
//
//            } else {
//                bool testMe = false;
//                outputStr[kursor] = priamoeVichitanieV14(inputStr1[kursor], inputStr2[kursor], &testMe);
//            }
//
//
//        }
//        cout << "Result: ";
//        if (otrizatelnoeGlobal) {
//            cout << "-";
//        }
//
//        cout <<outputStr<<endl;
//
//    }
//
//
//    if(znak == '+')
//    {
//
//        bool perenosRazriajda = false;
//        for(int kursor = dlinaMax - 1; kursor >= 0; kursor--)
//        {
//            bool localPerenosRazriajda = perenosRazriajda;
//            char sum = slojiV14(inputStr1[kursor], inputStr2[kursor], &perenosRazriajda);
//            if(localPerenosRazriajda)
//            {
//                sum = slojiV14(sum, '1', &localPerenosRazriajda);
//            }
//            outputStr[kursor] = sum;
//            //            cout << "TESTSUM: "<<sum <<endl;
//        }
//
//        cout << "Result: ";
//        if (otrizatelnoeGlobal) {
//            cout << "-";
//        }
//
//        cout <<outputStr<<endl;
//
//
//    }
//    cout << endl;
//
//
//
//
//    return 0;
//}
