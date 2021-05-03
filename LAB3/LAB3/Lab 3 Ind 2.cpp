//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//    float oblast,shag,fx=0.0,x,predel=3.0,fxmin=1000,xmin = 0.0;
//    cout << "На сколько частей разделить область поиска: ";
//    cin >> oblast;
//    shag = 1./oblast;
//    cout << "Шаг равен : "<< shag <<endl;
//
//    //-------------------------------------------------\\
//
//    
//    for(x = 1 ;x <= predel ;x+=shag)
//    {
//        fx=abs(acos(pow(M_E,-x))-2*sin(x));
//
//        if(fxmin > fx)
//        {
//            fxmin=fx;
//            xmin=x;
//
//
//        }
//        cout << fx<<endl;
//
//    }
//    
//    //-------------------------------------------------\\
//
//    
////    x=1;
////    while(x<=predel){
////        fx=abs(acos(pow(M_E,-x))-2*sin(x));
////
////               if(fxmin > fx)
////               {
////                   fxmin=fx;
////                   xmin=x;
////
////
////               }
////               cout << fx<<endl;
////        x+=shag;
////
////    }
//    
//    //-------------------------------------------------\\
//
////    x=1;
////    do{
////        fx=abs(acos(pow(M_E,-x))-2*sin(x));
////
////                       if(fxmin > fx)
////                       {
////                           fxmin=fx;
////                           xmin=x;
////
////
////                       }
////                       cout << fx<<endl;
////                x+=shag;
////
////
////    }
////    while (x<=predel);
//    
//    //-------------------------------------------------\\
////
//    cout << endl;
//    cout << "Min x : " << xmin<<endl;
//
//    return 0;
//}
