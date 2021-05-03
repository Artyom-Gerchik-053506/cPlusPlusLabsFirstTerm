#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int stroki, stolby;
    float counter = 0;
    
    cout << "Кол-во строк: ";
    cin >> stroki ;
    cout << "Кол-во столбцов: ";
    cin >> stolby ;
    
    int** a = new int *[stroki];
    for (int i = 0; i < stroki; i++)
    {
        a[i] = new int [stolby];
    }
    
    cout<<"Массив("<<stroki<<"x"<<stolby<<"): "<<endl;
    for(int i = 0; i < stroki; i++)
    {
        for(int j = 0; j < stolby; j++)
        {
            a[i][j]=rand()%5;
            cout<< setw(4) <<a[i][j];
        }
        cout << endl;
    }
    
    for(int j = 0; j < stolby; j++)
    {
        for(int i = 0; i < stroki; i++)
        {
            counter += a[i][j];
        }
        float result = counter * 1.0 / stroki;
        cout<<"В столбце "<<j + 1<<" "<< result<< " нулей."<<endl;
        counter = 0;
        result = 0;
    }
    
    for (int i = 0; i < stroki; i++)
    {
        delete[] a[i];
    }
    delete [] a;
    
    

    
    return 0;
}


