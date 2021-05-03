//#include <iostream>
//#include <string>
//
//using namespace std;
//
//unsigned long factorial(unsigned long chislo)
//{
//    if(chislo == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return chislo * factorial (chislo - 1);
//    }
//}
//
//unsigned long anagrammWords(string userInputStr)
//{
//    unsigned long currentPos = 0, dlinaUserInputStr = 0, znamenatel = 1, counterIf = 0, anagrammWords = 0;
//
//    //lenght
//    dlinaUserInputStr = userInputStr.length();
//
//    for(unsigned long kursor = currentPos; kursor < dlinaUserInputStr; kursor++)
//    {
//        if(userInputStr[kursor] == userInputStr[kursor + 1])
//        {
//            counterIf++;
//        }
//        else
//        {
//            currentPos = counterIf; //sdviz kursora
//            counterIf++; // plusovka, ibo counter budet raven 2, a bykv 3, etc.
//            znamenatel *= factorial(counterIf);
//            counterIf = 0;
//        }
//    }
//
//    anagrammWords = factorial(dlinaUserInputStr)/znamenatel;
//    return anagrammWords;
//}
//
//
//int main ()
//{
//    string userInputStr;;
//
//    //vvod
//    cout << "Input string: ";
//    getline(cin,userInputStr);
//
//    //sort alphabet
//    sort(userInputStr.begin(), userInputStr.end());
//    cout << "Input string, but sorted alphabetically: " << userInputStr <<endl;
//
//    cout << "Number of possible words: " << anagrammWords(userInputStr) << endl;
//
//    return 0;
//}
