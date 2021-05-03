//#include <iostream>
//
//using namespace std;
//
//bool delitsyaLi(int chislo, int delitel)
//{
//    int sumOfDelitel = delitel;
//    while(sumOfDelitel <= chislo)
//    {
//        //esli dvoichka bydet
//        // 1110
//        // 1110
//        // to XOR dast
//        // 0000
//        // => chislo delitsya
//        if((chislo^sumOfDelitel) == 0)
//        {
//            cout <<"Chislo "<<chislo<<" delitsya na "<<delitel<<endl;
//            return true;
//        }
//        sumOfDelitel += delitel;
//    }
//    cout <<"Chislo "<<chislo<<" ne delitsya na "<<delitel<<endl;
//    return  false;
//}
//
//int main()
//{
//    int delitel1 = 7;
//    int delitel2 = 23;
//    int delitel3 = 197;
//
//    int inputStr = 0;
//
//    cout <<"Vvedite chislo: ";
//    cin >> inputStr;
//
//    delitsyaLi(inputStr, delitel1);
//    delitsyaLi(inputStr, delitel2);
//    delitsyaLi(inputStr, delitel3);
//
//    return 0;
//}
//
//
