//#pragma hdrstop
//#pragma argused
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//    int N, k, plus,a;
//
//    cout << "Начальная сумма денег в рублях (Меньше 20) :  ";
//    cin >> N;
//
//    if(N>=20){
//        cout << "Ошибка. начальная сумма не может превышать 19 рублей."<<endl;
//        return 0;
//    }
//    cout << "Добавочная сумма в рублях (Меньше 80) : ";
//    cin >> k;
//
//    if(k>=80){
//        cout << "Ошибка. Добавочная сумма не может превышать 79 рублей."<<endl;
//        return 0;
//    }
//    plus = N + k;
//    if(plus>10&&plus<15){
//        switch (plus){
//                 case 11:case 12:case 13: case 14:  cout << "Конечная сумма : "<< plus<< " рублей "<<endl; break;
//        }
//        return 0;
//    }
//    a=plus%10;
//    switch(a) {
//        case 1: cout << "Конечная сумма : "<< plus<< " рубль "<<endl; break;
//        case 2:case 3:case 4:  cout << "Конечная сумма : "<< plus<< " рубля "<<endl; break;
//        case 5:case 6:case 7: case 8: case 9: case 0:  cout << "Конечная сумма : "<< plus<< " рублей "<<endl; break;
//
//    }
//
//
//    return 0;
//}
