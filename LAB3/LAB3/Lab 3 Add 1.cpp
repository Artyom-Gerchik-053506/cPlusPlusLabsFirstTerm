//#include <iostream>
//using namespace std;
//
//
//int main()
//
//{
//    #include "Factorial.h"
//     for(int i=100;i<=999;i++)
//     {
//           int digit1=i%10;      // единицы
//           int digit2=i/10%10; // десятки
//           int digit3=i/100;      // сотни
//           int sum=fact(digit1)+fact(digit2)+fact(digit3);
//           if(sum==i)
//              cout << "Трехзначное число, представимое в виде сумм факториалов своих цифр : " <<i<<endl;
//         //1! = 1,  2! = 2,  3! = 6,  4! = 24,  5! = 120,  6! = 720
////          Рассмотрим двузначные числа. Так как  5! = 120,  то цифры двузначного числа меньше пяти. Перебором убеждаемся, что таких чисел нет (надо рассмотреть числа 11, 12, 13, 14, 20, 21, 22, 23, 24, 30, 31, 32, 33, 34, 40, 41, 42, 43, 44.
////           Рассмотрим трёхзначные числа, цифры этих чисел не превосходят 6, то есть число не превосходит 666, но так как  6! = 720 > 666,  то все цифры меньше шести и само число не превосходит 555. Так как  3·5! = 360,  то число не превосходит 360. Следовательно, первая цифра 1, 2 или 3.  3! + 2·5! = 246 < 360,  то есть первая цифра 1 или 2. Но  2! + 2·5! = 242 < 255,  значит, первая цифра 1. Наконец,  1! + 2·5! = 241 > 155.  Следовательно, вторая цифра меньше 5.
////         Последняя цифра – 5, иначе сумма факториалов цифр двузначна. Из оставшихся вариантов (125, 135 и 145) подходит только 145
//     }
//    return 0;
//}
