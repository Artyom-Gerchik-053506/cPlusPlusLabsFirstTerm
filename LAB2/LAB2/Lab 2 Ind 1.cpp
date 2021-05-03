//#pragma hdrstop
//#pragma argused
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//    float a,b,z,y,x;
//    int func;
//    cout << "Формула : y= 2/3 * a * sin^2 * x - 3b/4 * cos^2 * f(x) " <<endl;
//    cout << "x = z, если z < 0."<<endl<< "x = sin(z), если z >= 0. "<<endl;
//    cout << "Введите a : ";
//    cin >> a;
//    cout << "Введите b : ";
//    cin >> b;
//    cout << "Введите z : ";
//    cin >> z;
//    if(z<0){
//        x=z;
//    }
//    if (z>=0){
//        x=sin(z);
//
//    }
//    cout << "x равен : " << x <<endl;
//    cout << "Каково значение f(x) ?"<<endl<<"1) 2x"<<endl<<"2) x^2"<<endl<<"3) x/3"<<endl;
//    cin >> func;
//    switch(func){
//        case 1: cout<< "Формула : y= 2/3 * a * sin^2(x) - 3b/4 * cos^2(2x) " <<endl;
//            y = 2./3 * a * (pow(sin(x),2)) - 3.*b/4 * pow(cos(2*x),2);
//                cout << "y равен : " << y<<endl;break;
//        case 2: cout<< "Формула : y= 2/3 * a * sin^2 * x - 3b/4 * cos^2 * x^2 " <<endl;
//            y = 2./3 * a * (pow(sin(x),2)) - 3.*b/4 * pow(cos(pow(x,2)),2);
//        cout << "y равен : " << y<<endl;break;
//        case 3: cout<< "Формула : y= 2/3 * a * sin^2 * x - 3b/4 * cos^2 * x/3 " <<endl;
//            y = 2./3 * a * (pow(sin(x),2)) - 3.*b/4 * pow(cos(x/3),2);
//        cout << "y равен : " << y<<endl;break;
//        default: cout << "Неправильный ввод. "<<endl; break;
//    }
//
//    return 0;
//}
