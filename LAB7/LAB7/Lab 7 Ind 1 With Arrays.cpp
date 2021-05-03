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
//void massivStepenej14(int desjatichnoe, int *massivOstatkovDeleniaNa14SPozicijamiStepenej, int *maksImdexMassiva)
//{
//    int sistemaSchisleniaj = 14;
//    int kolichestvo14 = desjatichnoe / sistemaSchisleniaj;
//    int ostatokOt14 = desjatichnoe % sistemaSchisleniaj;
//    massivOstatkovDeleniaNa14SPozicijamiStepenej[*maksImdexMassiva] = ostatokOt14;
//    if (kolichestvo14 > sistemaSchisleniaj) {
//        *maksImdexMassiva += 1;
//        massivStepenej14(kolichestvo14, massivOstatkovDeleniaNa14SPozicijamiStepenej, maksImdexMassiva);
//    } else {
//        *maksImdexMassiva += 1;
//        massivOstatkovDeleniaNa14SPozicijamiStepenej[*maksImdexMassiva] = kolichestvo14;
//    }
//}
//
//char* peregonka(char* massiv14Znach, int maksIndexMassiva, int* massivOstatkovDeleniaNa14SPozicijamiStepenej)
//{
//    for (int i = 0; i < maksIndexMassiva + 1; i++)
//    {
//        int intAs14 = massivOstatkovDeleniaNa14SPozicijamiStepenej[i];
//        if (intAs14 == 0)   {massiv14Znach[i] = '0';}
//        if (intAs14 == 1)   {massiv14Znach[i] = '1';}
//        if (intAs14 == 2)   {massiv14Znach[i] = '2';}
//        if (intAs14 == 3)   {massiv14Znach[i] = '3';}
//        if (intAs14 == 4)   {massiv14Znach[i] = '4';}
//        if (intAs14 == 5)   {massiv14Znach[i] = '5';}
//        if (intAs14 == 6)   {massiv14Znach[i] = '6';}
//        if (intAs14 == 7)   {massiv14Znach[i] = '7';}
//        if (intAs14 == 8)   {massiv14Znach[i] = '8';}
//        if (intAs14 == 9)   {massiv14Znach[i] = '9';}
//        if (intAs14 == 10 ) {massiv14Znach[i] = 'A';}
//        if (intAs14 == 11 ) {massiv14Znach[i] = 'B';}
//        if (intAs14 == 12 ) {massiv14Znach[i] = 'C';}
//        if (intAs14 == 13 ) {massiv14Znach[i] = 'D';}
//    }
//    return massiv14Znach;
//}
//
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
//    delete [] chislo;
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
//    int *massivOstatkovDeleniaNa14SPozicijamiStepenej = new int [100500];
//    int maksImdexMassiva = 0;
//    massivStepenej14(desyat, massivOstatkovDeleniaNa14SPozicijamiStepenej, &maksImdexMassiva);
//
//    char *massiv14Znach = new char [100500];
//    peregonka(massiv14Znach, maksImdexMassiva, massivOstatkovDeleniaNa14SPozicijamiStepenej);
//
//    cout <<"Chislo v chetyrnadcitirichnoi: ";
//    for (int i = maksImdexMassiva; i >= 0; i--)
//    {
//        cout << massiv14Znach[i];
//    }
//    cout << endl;
//
//    delete [] massivOstatkovDeleniaNa14SPozicijamiStepenej;
//    delete [] massiv14Znach;
//    return 0;
//}
