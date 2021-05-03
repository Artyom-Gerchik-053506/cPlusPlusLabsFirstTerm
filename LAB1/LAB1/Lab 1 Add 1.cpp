#pragma hdrstop
#pragma argused
#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int h1,min1,h2,min2,h3,min3,h31,min31;
    cout<<"What time did the student start doing the tasks?"<<endl;
    cout<<"Enter hours : ";
    cin >> h1;
    cout<<"Enter minutes : ";
    cin >> min1;
    cout<<"Student takes to work in : " << h1 << ":" << min1 <<endl;
    cout<<"What time did the student finish work?"<<endl;
    cout<<"Enter hours : ";
    cin >> h2;
    cout<<"Enter minutes : ";
    cin >> min2;
    cout<<"Student finished work in : " << h2 << ":" << min2 <<endl;
    h3 = h2 - h1;
    min3 = min2 - min1;
    if(min3<0){
        min31=(60-min1)+min2;
        h31=h3-1;
        cout<<"Student spent : " << h31 << " hours and " << min31 << " minutes" <<endl;
              }
    else {
        cout<<"Student spent : " << h3 << " hours and " << min3 << " minutes" <<endl;
         }

return 0;

}


