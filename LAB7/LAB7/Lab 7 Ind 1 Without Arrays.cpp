//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int strokadlina(char *s)
//{
//    int i;
//    for (i = 0; s[i] != '\0'; i++);
//    return i;
//}
//
//bool proverka(char* chislo, int *positionWrong)
//{
//    char validDigits[] = {'0','1','2','3','4'};
//    for(int kursor = 0; kursor < strokadlina(chislo); kursor++)
//    {
//        bool valid = false;
//        for(int kursorDigits = 0; kursorDigits < strokadlina(validDigits); kursorDigits++)
//        {
//            if(chislo[kursor] == validDigits[kursorDigits])
//            {
//                valid = true;
//                break;
//            }
//        }
//        if (valid)
//        {
//            continue;
//        }
//        else
//        {
//            *positionWrong = kursor;
//            return false;
//        }
//
//    }
//    return true;
//}
//
//
//int intToDesyat(char* chislo)
//{
//    int desyat = 0;
//    for(int kursor = 0; kursor < strokadlina(chislo); kursor++)
//    {
//        int stepenPyoterki = pow(5,(strokadlina(chislo) - kursor - 1));
//        int charToInt = chislo[kursor] - '0';
//        desyat += charToInt * stepenPyoterki;
//    }
//    cout <<"Chislo v desyatichoi systeme: "<<desyat<<endl;
//    return desyat;
//}
//
//char intAsChar(int intAs14)
//{
//    if (intAs14 == 0)   {return '0';}
//    if (intAs14 == 1)   {return '1';}
//    if (intAs14 == 2)   {return '2';}
//    if (intAs14 == 3)   {return '3';}
//    if (intAs14 == 4)   {return '4';}
//    if (intAs14 == 5)   {return '5';}
//    if (intAs14 == 6)   {return '6';}
//    if (intAs14 == 7)   {return '7';}
//    if (intAs14 == 8)   {return '8';}
//    if (intAs14 == 9)   {return '9';}
//    if (intAs14 == 10 ) {return 'A';}
//    if (intAs14 == 11 ) {return 'B';}
//    if (intAs14 == 12 ) {return 'C';}
//    if (intAs14 == 13 ) {return 'D';}
//
//    return ' ';
//}
//
//void massivStepenej14(int desjatichnoe, char *chisloChetirnadcatirichnoiSysteme, int *dlinaChara)
//{
//    int sistemaSchisleniaj = 14;
//    int kolichestvo14 = desjatichnoe / sistemaSchisleniaj;
//    int ostatokOt14 = desjatichnoe % sistemaSchisleniaj;
//    chisloChetirnadcatirichnoiSysteme[*dlinaChara] = intAsChar(ostatokOt14);
//    if (kolichestvo14 > sistemaSchisleniaj) {
//        *dlinaChara += 1;
//        massivStepenej14(kolichestvo14, chisloChetirnadcatirichnoiSysteme, dlinaChara);
//    } else {
//        *dlinaChara += 1;
//        chisloChetirnadcatirichnoiSysteme[*dlinaChara] = intAsChar(kolichestvo14);
//    }
//}
//
//int main()
//{
//    char* chislo = new char [81];
//    int positionWrong = 0;
//    cout <<"Chislo v pyatirichnoi systeme: ";
//    cin.getline(chislo,80);
//    if (proverka(chislo, &positionWrong) == false)
//    {
//        cout << "Chislo " << chislo[positionWrong]<<" pod nomerom "<<positionWrong + 1<<" ne validno"<<endl;
//        return 228;
//    }
//    int desyat = intToDesyat(chislo);
//    //
//    //    int ostatokOtDeleniya = 0;
//    //    int chetirnadcat = 0;
//    //    while(desyat > 14)
//    //    {
//    //     ostatokOtDeleniya = desyat / 14;
//    //        chetirnadcat = desyat - pow(14,ostatokOtDeleniya);
//    //        desyat -= 14*ostatokOtDeleniya;
//    //    }
//
//    char* chisloChetirnadcatirichnoiSysteme = new char [100];
//    int dlinaChara = 0;
//    massivStepenej14(desyat, chisloChetirnadcatirichnoiSysteme, &dlinaChara);
//
//
//
//    //perekrutka s konca massiva (100500)
//    //    for (int i = 0, j = dlinaChara; j<=100 ; i++, j++) {
//    //        if (j <= 99) {
//    //            chisloChetirnadcatirichnoiSysteme[i] = chisloChetirnadcatirichnoiSysteme[j];
//    //        } else {
//    //            chisloChetirnadcatirichnoiSysteme[i] = '\0';
//    //        }
//    //
//    //    }
//    //
//    //    cout <<"Chislo v chetyrnadcitirichnoi: ";
//    //    cout << chisloChetirnadcatirichnoiSysteme;
//    //    cout << endl;
//
//    cout <<"Chislo v chetyrnadcitirichnoi: ";
//    for (int i = dlinaChara; i >= 0; i--)
//    {
//        cout << chisloChetirnadcatirichnoiSysteme[i];
//    }
//    cout << endl;
//
//
//
//    return 0;
//}
