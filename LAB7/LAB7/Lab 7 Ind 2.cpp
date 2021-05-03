//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
////int strokadlina(char *s)
////{
////    int i;
////    for (i = 0; s[i] != '\0'; i++);
////    return i;
////}
//
//void massivStepenej14(int desjatichnoe, int *massivOstatkovDeleniaNa14SPozicijamiStepenej, int *maksImdexMassiva)
//{
//    int sistemaSchisleniaj = 2;
//    int kolichestvo14 = abs(desjatichnoe) / sistemaSchisleniaj;
//    int ostatokOt14 = abs(desjatichnoe) % sistemaSchisleniaj;
//    massivOstatkovDeleniaNa14SPozicijamiStepenej[*maksImdexMassiva] = ostatokOt14;
//    if (kolichestvo14 >= sistemaSchisleniaj) {
//        *maksImdexMassiva += 1;
//        massivStepenej14(kolichestvo14, massivOstatkovDeleniaNa14SPozicijamiStepenej, maksImdexMassiva);
//    }
//    else {
//        *maksImdexMassiva += 1;
//        massivOstatkovDeleniaNa14SPozicijamiStepenej[*maksImdexMassiva] = kolichestvo14;
//    }
//}
//
//void perevod(int desytichnoe, int maksImdexMassiva, int* massivOstatkovDeleniaNa14SPozicijamiStepenej)
//{
//    
//    if(desytichnoe < 0)
//    {
//        cout <<"1,";
//        for (int i = maksImdexMassiva; i >= 0; i--)
//        {
//            cout << massivOstatkovDeleniaNa14SPozicijamiStepenej[i];
//        }
//        cout << endl;
//        cout <<"Chislo v dvoichnoi(Obratnii kod): ";
//        cout <<"1,";
//        
//        for (int i = maksImdexMassiva; i >= 0; i--)
//        {
//            if(massivOstatkovDeleniaNa14SPozicijamiStepenej[i] == 1)
//            {
//                massivOstatkovDeleniaNa14SPozicijamiStepenej[i] = 0;
//            }
//            else
//            {
//                massivOstatkovDeleniaNa14SPozicijamiStepenej[i] = 1;
//            }
//            cout << massivOstatkovDeleniaNa14SPozicijamiStepenej[i];
//        }
//        cout << endl;
//    }
//    if(desytichnoe > 0)
//    {
//        cout <<"0,";
//        for (int i = maksImdexMassiva; i >= 0; i--)
//        {
//            cout << massivOstatkovDeleniaNa14SPozicijamiStepenej[i];
//        }
//        cout << endl;
//        cout <<"Chislo v dvoichnoi(Obratnii kod): ";
//        cout <<"0,";
//        for (int i = maksImdexMassiva; i >= 0; i--)
//        {
//            cout << massivOstatkovDeleniaNa14SPozicijamiStepenej[i];
//        }
//    }
//    cout << endl;
//}
//
//int main()
//{
//    int desytichnoe = 0;
//    cout <<"Desyatichoe: ";
//    cin >> desytichnoe;
//    
//    int *massivOstatkovDeleniaNa14SPozicijamiStepenej = new int [100500];
//    int maksImdexMassiva = 0;
//    massivStepenej14(desytichnoe, massivOstatkovDeleniaNa14SPozicijamiStepenej, &maksImdexMassiva);
//    
//    cout <<"Chislo v dvoichnoi(Pryamoi kod): ";
//    perevod(desytichnoe, maksImdexMassiva, massivOstatkovDeleniaNa14SPozicijamiStepenej);
//    
//    delete [] massivOstatkovDeleniaNa14SPozicijamiStepenej;
//    
//    return 0;
//}
