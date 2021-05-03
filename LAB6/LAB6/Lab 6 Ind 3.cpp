//#include <iostream>
//using namespace std;
//
//int strokadlina(char *s)
//{
//    int i;
//    for (i = 0; s[i] != '\0'; i++);
//    return i;
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
////apend
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
//char* filtredStr(char* unfiltredStr)
//{
//    char previousChar = ' ';
//    char *resultStr = new char[41];
//    int resultStrPostion = 0;
//    for(int position = 0; position < strokadlina(unfiltredStr); position++)
//    {
//        if (unfiltredStr[position] != ' ')
//        {
//            resultStr[resultStrPostion] = unfiltredStr[position];
//            previousChar = unfiltredStr[position];
//            resultStrPostion++;
//        }
//        else if(previousChar != unfiltredStr[position])
//        {
//            resultStr[resultStrPostion] = unfiltredStr[position];
//            previousChar = unfiltredStr[position];
//            resultStrPostion++;
//        }
//    }
//    if (resultStr[resultStrPostion - 1] == ' ') {
//        resultStr[resultStrPostion - 1] = '\0';
//    } else {
//        resultStr[resultStrPostion] = '\0';
//    }
//    //    cout <<"filteredStr: " << resultStr << endl;
//    return resultStr;
//}
//
//char* givemestringfromposition(char *inputStr, int start, int finish)
//{
//    char *oneWord = new char [41];
//    for(int startingPos = start, i = 0; startingPos < finish; startingPos++, i++ )
//    {
//        oneWord[i] = inputStr[startingPos];
//    }
//    oneWord[finish-start] = '\0';
//    //    cout <<"Test oneword UNFILTRED: " << oneWord << endl;
//    char* filteredOneWord = filtredStr(oneWord);
//    delete [] oneWord;
//    //    cout <<"Test oneword: "<< filteredOneWord << endl;
//    return filteredOneWord;
//}
//
//char** sozdaniemassiva(char* inputStr, int* skokaSlov)
//{
//    char** massiv = new char* [41];
//    int startingPos = 0;
//    for(int currentPos=0; currentPos < strokadlina(inputStr); currentPos++)
//    {
//        if(inputStr[currentPos] == ' ')
//        {
//            //take this element
//            //            cout <<"StartingPos: "<< startingPos<<endl;
//            //            cout <<"CurrentPos: "<< currentPos<<endl;
//
//            char *oneWord = givemestringfromposition(inputStr, startingPos, currentPos);
//            massiv[*skokaSlov] = oneWord;
//            // move startingPos
//            startingPos = currentPos;
//            *skokaSlov += 1;
//        }
//    }
//    //zabrat ostatok stroki
//    //i sdelat psolednim elementom
//    if (startingPos < strokadlina(inputStr))
//    {
//        char *oneWord = givemestringfromposition(inputStr, startingPos, strokadlina(inputStr));
//        massiv[*skokaSlov] = oneWord;
//        *skokaSlov += 1;
//
//    }
//    return massiv;
//}
//
//char** poryadokVMassive(char** massiv, int skokaSlov)
//{
//    char** massivReady = new char* [41];
//    for (int i = 0, j = 1; i < skokaSlov; i += 2, j += 2)
//    {
//        if (j < skokaSlov)
//        {
//            massivReady[j] = massiv[i];
//            massivReady[i] = massiv[j];
//        }
//        else
//        {
//            massivReady[i] = massiv[i];
//        }
//
//    }
//    return massivReady;
//
//}
//void cleanUpMassiv(char** massiv, int skokaSlov)
//{
//    for(int i = 0; i < skokaSlov; i++)
//    {
//        delete [] massiv[i];
//    }
//    delete [] massiv;
//}
//char* sozdanieStroki(char** massivReady, int skokaSlov)
//{
//    char *strtestOutput = new char[41];
//    *strtestOutput = '\0'; //null terminate iz-za togo, chto idet izmerenie dlini, a vnytri random
//    int counter = 0;
//    for (int i = 0; i < skokaSlov; i++)
//    {
//        char *oneWord = massivReady[i];
//        if (strokadlina(strtestOutput) > 0)
//        {
//            strtestOutput = dobavitChar(strtestOutput, ' ');
//            counter++;
//        }
//        counter += strokadlina(oneWord);
//        strtestOutput = dobavitStroku(strtestOutput, oneWord);
//    }
//    strtestOutput[counter] = '\0';
//    return strtestOutput;
//}
//
//int main()
//{
//    int skokaSlov = 0;
//    char *userInputStr = new char[41];
//
//    // DAj stroku
//    cout <<"Enter string(40 characters max): ";
//    cin.getline(userInputStr,41);
//
//    //filtr
//    char* filteredStr = filtredStr(userInputStr);
//    delete [] userInputStr;
//
//    // Sozdanie massive
//    char** massiv = sozdaniemassiva(filteredStr, &skokaSlov);
//    delete [] filteredStr;
//    //    for(int i = 0; i< skokaSlov; i++)
//    //    {
//    //        cout <<"Massiv ot"<<i<<":"<< massiv[i]<<endl;
//    //    }
//
//    // massiv soderjit vse chto nado
//    // izmenaem projadok slov i lojim v massivReady
//    char** massivReady = poryadokVMassive(massiv, skokaSlov);
//    //        for(int i = 0; i< skokaSlov; i++)
//    //        {
//    //            cout <<"MassivReady ot"<<i<<":"<< massivReady[i]<<endl;
//    //        }
//    delete [] massiv; //t.k. massivReady soderjit te je stroki
//    //    for(int i = 0; i< skokaSlov; i++)
//    //    {
//    //        cout <<"MassivReady after delete ot"<<i<<":"<< massivReady[i]<<endl;
//    //    }
//
//    // sozdanie stroki
//    char* strtestOutput = sozdanieStroki(massivReady, skokaSlov);
//    //    cout <<"strtestout:"<<strtestOutput<<endl;
//    cleanUpMassiv(massivReady, skokaSlov);
//    //    cout <<"strtestout:"<<strtestOutput<<endl;
//
//
//    // vivod resulatata iz strtestOutput
//    cout <<"Output string is: "<< strtestOutput << endl;
//    delete [] strtestOutput;
//
//    return 0;
//}
