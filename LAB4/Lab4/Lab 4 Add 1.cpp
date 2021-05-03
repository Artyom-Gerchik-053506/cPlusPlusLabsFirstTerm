//#include <iostream>
//#include <iomanip>
//#include <time.h>
//
//using namespace std;
//
//int main(){
//    srand(time(NULL));
//    int N,M,i,j,i_max,stolb1,stolb2,ch,stroka1,stroka2,sh;
//
//    cout << "Кол-во строк: ";
//            cin >> N ;
//            cout << "Кол-во столбцов: ";
//            cin >> M ;
//
//        int** a = new int *[N];
//        for (int i = 0; i < N; i++)
//            a[i] = new int [M];
//
//    cout<<"Массив("<<N<<"x"<<M<<"): "<<endl;
//    for(i=0; i<N; i++)
//    {
//        for(j=0; j<M; j++)
//        {
//            a[i][j]=rand()%5+1;
//            cout<< setw(4) <<a[i][j];
//        }
//
//        i_max=0;
//               for(j=0; j<M; j++)
//               {
//                   if(a[i][j]>a[i][i_max])
//                       i_max=j;
//
//               }
//        cout << "   Наибольшее значение в строке ["<< i+1 << "] = " << a[i][i_max] ;
//
//               cout<<endl;
//    }
//
//    int maxi = 0, maxj = 0;
//      for(int i = 0; i < N; ++i)
//          for(int j = 0; j < M; ++j)
//              if(a[i][j] > a[maxi][maxj])
//              {
//                  maxi = i;
//                  maxj = j;
//              }
//    cout << "Наибольший элемент массива равен (наиболее ближайший к начальному индексу) = " << a[maxi][maxj]<<" Его индекс: ["<<maxi+1<<"]["<<maxj+1<<"]" <<endl;
//
//    if(a[0][0]<a[maxi][maxj]){
//        stolb1 = 1;
//        stolb2 = maxj + 1;
//        if(stolb1==stolb2)
//        {
//            cout<< "Замена столбцов не требуется. "<<endl;
//
//        }
//        else {
//    cout << "Замена столбцов "<<endl;
//
//        for (i=0; i<N; i++) {
//            ch = a[i][stolb1-1];
//            a[i][stolb1 - 1] = a[i][stolb2 - 1];
//            a[i][stolb2 - 1] = ch;
//        }
//        for (i=0; i<N; i++) {
//            for (j=0; j<M; j++) {
//                cout << setw(4) << a[i][j];
//            }
//            cout<<endl;
//        }
//    cout << "Произошла замена столбца ["<< stolb2 <<"] и столбца ["<< stolb1 << "]" <<endl;
//        }
//
//        stroka1 = 1;
//        stroka2 = maxi + 1;
//        if(stroka1==stroka2)
//        {
//            cout<< "Замена строк не требуется. "<<endl;
//
//        }
//        else {
//
//    cout<<"Замена строк "<<endl;
//        for (j=0; j<M; j++) {
//            sh = a[stroka1-1][j];
//            a[stroka1-1][j] = a[stroka2-1][j];
//            a[stroka2-1][j] = sh;
//        }
//        for (i=0; i<N; i++) {
//            for (j=0; j<M; j++) {
//                cout << setw(4) << a[i][j];
//            }
//            cout<<endl;
//        }
//        cout << "Произошла замена строки ["<< stroka2 <<"] и строки ["<< stroka1 << "]" <<endl;
//
//
//
//
//
//    }
//        cout << "Наибольший элемент массива теперь находится в левом верхнем углу."<<endl;
//}
//    else
//    {
//        cout << "A[1][1] уже является максимальным элементом, никаких операций не требуется."<<endl;
//    }
//
//
//
//
//        for (int i = 0; i < N; i++)
//                {
//                    delete[] a[i];
//                }
//
//                delete [] a;
//                cout << "Память очищена."<<endl;
//
//                return 0;
//            }
//
