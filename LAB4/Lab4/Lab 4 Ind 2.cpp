//#include <iostream>
//#include <iomanip>
//#include <math.h>
//#include <time.h>
//
//using namespace std;
//
//const unsigned int a = 3;
//const unsigned int b = 5;
//
//int ara[a][b];
//
//int main() {
//    srand(time(NULL));
//    int a1,a2=0,a3=0,a4=0,a5=0;
//    cout <<"Массив 3x5."<<endl;
//    
////ввод с клавы.
////    for (int i = 0; i < a; i++) {
////        for (int j = 0; j < b; j++) {
////            cout << "A""["<<i+1<<"]""["<<j+1<<"] : ";
////            cin >> ara[i][j] ;
////
////        }
////    }
//    
//    cout <<"Массив : " <<endl;
//    for (int i = 0; i < a; i++)
//{
//           for (int j = 0; j < b; j++)
//        {
//            ara[i][j] =rand()%100+1;
//               cout << setw(5) << ara[i][j];
//        }
//               cout << endl;
//}
//    
//    cout << setw(4) << "Главная диагональ :";
//    for(int i = 0; i < a; i++)
//{
//    cout << setw(4) << ara[i][i];
//        a1 = ara[i][i] % 2;
//        if(a1==0)
//        {
//            a2++;
//        }
//}
//    cout <<endl;
//    
//    cout << setw(4) << "Побочная диагональ :";
//    for(int i = 0; i < a; i++)
//{
//    int x =0;
//    for(int j = a-1 ; j >= x  ; j--){
//
//        a3=abs(i-j);
//        if(a3==a-1)
//        {
//        cout<<setw(4) << ara[i][j];
//            a4 = ara[i][j] % 2;
//            if(a4==0)
//            {
//                a5++;
//            }
//        }
//        if(i==1&&j==1)
//        {
//        cout<<setw(4) << ara[i][j];
//            a4 = ara[i][j] % 2;
//            if(a4==0)
//            {
//                a5++;
//            }
//        }
//
// 
//    }
//    
//    
//}
//    
//    
//    cout << endl;
//
//    cout<< "Кол-во четных на главной диагонали :  "<<a2<<endl;
//    cout<< "Кол-во четных на побочной диагонали :  "<<a5<<endl;;
//    
//       return 0;
//   }
