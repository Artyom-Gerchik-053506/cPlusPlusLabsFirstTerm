//#include <iostream>
//#include <time.h>
//#include <iomanip>
//
//using namespace std;
//
//
// 
//int main()
//{
//    srand( time( NULL ) );
//     int N, M, i, j, i_max, i_min;
//    
////    в массиве max_str[] хранятся максимальные значения массива по строкам
////    в массиве min_str[] хранятся минимальные значения массива по строкам
////    в массиве max_stolb[] хранятся максимальные значения массива по столбцам
////    в массиве min_stolb[] хранятся минимальные значения массива по столбцам
//    
//        cout << "Кол-во строк: ";
//        cin >> N ;
//        cout << "Кол-во столбцов: ";
//        cin >> M ;
//    int max_str[N], min_str[N], max_stolb[M], min_stolb[M];
//    
//        int** a = new int *[N];
//        for (int i = 0; i < N; ++i)
//            a[i] = new int [M];
//
//    cout<<"Массив("<<N<<"x"<<M<<"): "<<endl;
//    for(i=0; i<N; i++)
//    {
//        i_max=i_min=0;
//        for(j=0; j<M; j++)
//        {
//            a[i][j]=rand()%10;
//            cout<< setw(3) <<a[i][j];
//            if(a[i][j]<a[i][i_min])
//                i_min=j;
//            if(a[i][j]>a[i][i_max])
//                i_max=j;
//        }
//        cout<<endl;
//        max_str[i]=a[i][i_max];
//        min_str[i]=a[i][i_min];
//    }
//    for(j=0; j<M; j++)
//    {
//        i_min=i_max=0;
//        for(i=0; i<N; i++)
//        {
//            if(a[i][j]<a[i_min][j])
//                i_min=i;
//            if(a[i][j]>a[i_max][j])
//                i_max=i;
//        }
//        max_stolb[j]=a[i_max][j];
//        min_stolb[j]=a[i_min][j];
//    }
//    cout<<"Седловые точки: "<<endl;
//    for(i=0; i<N; i++)
//        for(j=0; j<M; j++)
//            if((a[i][j]==max_str[i] && a[i][j]==min_stolb[j]) || (a[i][j]==min_str[i] && a[i][j]==max_stolb[j]))
//                cout<< setw(4)<<"A[" <<i+1<< "][" <<j+1<< "]" << "="<<a[i][j] <<endl;
//
//
//
//    cout<<endl;
//    for (int i = 0; i < N; i++)
//        {
//            delete[] a[i];
//        }
//    
//        delete [] a;
//        cout << "Память очищена."<<endl;
//    
//        return 0;
//    }
//
