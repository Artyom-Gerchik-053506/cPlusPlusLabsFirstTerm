//#include <iostream>
//#include <ctime>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//srand(time(NULL));
//    int stroki = 0 , stolby = 0 , g = 0;
//    cout << "Введите размеры массива :"<<endl;
//    cout << "Строки(<=100) : ";
//    cin >> stroki;//k
//    if(stroki > 100)
//    {
//        cout<<"Неверное условие."<<endl;
//        return 0;
//    }
//    cout << "Столбцы(<=100) : ";
//    cin >> stolby;//l
//    if(stolby > 100)
//    {
//        cout<<"Неверное условие."<<endl;
//        return 0;
//    }
//
//    cout <<"******************************************************"<<endl;
//
//    cout << "Исходный массив:"<<endl;
//    int** array1 = new int* [stroki];
//    for (int a = 0; a < stroki; a++)
//    array1[a] = new int[stolby];
//
//for (int a = 0; a < stroki; a++)
//    {
//        for (int b = 0; b < stolby; b++)
//        {
//            array1[a][b] = rand ()%10+1;
//
//        }
//    }
//
//for (int a = 0; a < stroki; a++)
//    {
//    for (int b = 0; b < stolby; b++)
//    cout << setw(4) << array1[a][b];
//    cout << endl;
//
//    }
//
//
//
//int* arraysearchduplicates = new int[stroki];
//for (int a = 0; a < stroki; a++)
//arraysearchduplicates[a] = 0;
//int p = 0;
//    for (int a = 0; a < stroki; a++)
//        for (int b = 0; b < stolby; b++)
//        {
//            for (int s = 0; s < stolby; s++)
//            {
//                if (b != s)
//                {
//                    if (array1[a][b] == array1[a][s])
//                        p++;
//                }
//            }
//            if (p==1)
//                arraysearchduplicates[a]++;
//            p = 0;
//        }
//
//    cout <<"******************************************************"<<endl;
//
//    for (int a = 0; a < stroki; a++)
//    {
//    cout << "Кол-во дубликатов по строкам. Строка "<<"[" << stroki << "]: " << arraysearchduplicates[a] << " Дубликатов "<<endl;
//    }
//
//    cout <<"******************************************************"<<endl;
//
//    cout <<"Новый массив:"<<endl;
//int** array2 = new int* [stroki];
//for (int a = 0; a < stroki; a++)
//array2[a] = new int[arraysearchduplicates[a]];
//    for (int a = 0; a < stroki; a++)
//    {
//        for (int b = 0; b < stolby; b++)
//        {
//            for (int s = 0; s < stolby; s++)
//            {
//                if (b != s)
//                {
//                    if (array1[a][b] == array1[a][s])
//                        p++;
//                }
//            }
//            if (p==1)
//            {
//                array2[a][g] = array1[a][b];
//                g++;
//            }
//            p = 0;
//        }
//        g = 0;
//    }
//
//    for (int a = 0; a < stroki; a++)
//    {
//        for (int b = 0; b < arraysearchduplicates[a]; b++)
//        cout << setw(4) << array2[a][b];
//        cout << endl;
//    }
//
//    cout <<"******************************************************"<<endl;
//
//    return 0;
//}
