//#include <iostream>
//using namespace std;
//
//int strokadlina(char *s)
//{
//    int i;
//    for (i = 0; s[i] != '\0'; i++);
//    return i;
//}
//
//int main  ()
//{
//    char stroka[80];
//    char* numbers = new char[80];
//    int i = 0;
//    cout <<"Введите строку (80 символов): ";
//    cin.getline (stroka,80);
//    for(int kursor = 0; kursor<strokadlina(stroka); kursor++)
//    {
//        if(stroka[kursor] >= '0' && stroka[kursor] <= '9')
//        {
//            numbers[i] = stroka[kursor];
//            i++;
//
//        }
//    }
//    cout << "Numbers: "<< numbers << endl;
//    delete [] numbers;
//
//    return 0;
//}
