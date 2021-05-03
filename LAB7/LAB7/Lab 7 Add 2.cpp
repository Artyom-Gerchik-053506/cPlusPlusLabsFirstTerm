//#include <iostream>
//#include <math.h>
//#include <chrono>
//
//using namespace std;
//
//
//int strokadlina(char *s)
//{
//    int i;
//    for (i = 0; s[i] != '\0'; i++);
//    return i;
//}
//
//void perevodVSS( long long int desjatichnoe,  long long int *massivOstatkovDeleniaNa14SPozicijamiStepenej,  long long int *maksImdexMassiva)
//{
//    long long int sistemaSchisleniaj = 2;
//    long long int kolichestvo14 = abs(desjatichnoe) / sistemaSchisleniaj;
//    long long int ostatokOt14 = abs(desjatichnoe) % sistemaSchisleniaj;
//    massivOstatkovDeleniaNa14SPozicijamiStepenej[*maksImdexMassiva] = ostatokOt14;
//    if (kolichestvo14 >= sistemaSchisleniaj) {
//        *maksImdexMassiva += 1;
//        perevodVSS(kolichestvo14, massivOstatkovDeleniaNa14SPozicijamiStepenej, maksImdexMassiva);
//    }
//    else {
//        *maksImdexMassiva += 1;
//        massivOstatkovDeleniaNa14SPozicijamiStepenej[*maksImdexMassiva] = kolichestvo14;
//    }
//}
//
//long long int generatorChisel( long long int parametr)
//{
//    char tekushiiIntAsStr[100500];
//    bool uvelichenieRazryada = true;
//
//    sprintf(tekushiiIntAsStr, "%lld", parametr);
//
//
//    for(int kursor = strokadlina(tekushiiIntAsStr) - 1; kursor >= 0; kursor--)
//    {
//
//        if(tekushiiIntAsStr[kursor] == '0')
//        {
//            //            cout<<"Stroku mojno uvelichit' "<<endl;
//            uvelichenieRazryada = false;
//            break;
//        }
//
//    }
//
//    if(uvelichenieRazryada)
//    {
//        long long int ostatok = parametr / 10;
//        long long int raznost = parametr - ostatok;
//        long long int umnozhenie = raznost * 10;
//        return umnozhenie;
//    }
//    else
//    {
//        if (parametr == 0)
//        {
//            return 1;
//        } else {
//            long long int stepen = strokadlina(tekushiiIntAsStr) - 1;
//            long long int desyatVDstepeni = pow(10,stepen);
//            long long int delenie = parametr - desyatVDstepeni;
//            return desyatVDstepeni + generatorChisel(delenie);
//        }
//    }
//    return 0;
//}
//
//
//
//int main()
//{
//    int n = 0;
//    cout << "n is: ";
//    cin >> n;
//
//    auto t1 = std::chrono::high_resolution_clock::now();
//
//    long long int  tekushiiInt = 0;
//    int iteracia = 0;
//
//    while(true)
//    {
//
//        if (tekushiiInt == 0)
//        {
//            tekushiiInt = 1;
//        }
//        else {
//            //            cout << "gener OLD chilso " << tekushiiInt << endl;
//            tekushiiInt = generatorChisel(tekushiiInt);
//            //            cout << "gener NEW chilso " << tekushiiInt << endl;
//        }
//
//
//        char tekushiiIntAsStr[100500];
//        sprintf(tekushiiIntAsStr, "%lld", tekushiiInt);
//
//        bool nePodhoditChislo = false;
//
//        // 1111 101 10001
//
//        long long int *massivOstatkovDeleniaNa14SPozicijamiStepenej = new long long int [100500];
//        long long int maksImdexMassiva = 0;
//
//        perevodVSS(tekushiiInt, massivOstatkovDeleniaNa14SPozicijamiStepenej, &maksImdexMassiva);
//        massivOstatkovDeleniaNa14SPozicijamiStepenej[maksImdexMassiva+1] = '\0';
//
//        //        tekushiiIntAsStr
//        //        massivOstatkovDeleniaNa14SPozicijamiStepenej
//        for(int kursor = 0; kursor < strokadlina(tekushiiIntAsStr); kursor++)
//        {
//            long long int kursorDliDvocicke = strokadlina(tekushiiIntAsStr) - kursor - 1;
//            long long int vDvoichkeAsInt = massivOstatkovDeleniaNa14SPozicijamiStepenej[kursorDliDvocicke];
//            char vDvoichke = vDvoichkeAsInt + '0';
//            char vdesyatichnoi = tekushiiIntAsStr[kursor];
//            if(vDvoichke != vdesyatichnoi)
//            {
//                nePodhoditChislo = true;
//                break;
//            }
//
//        }
//        delete [] massivOstatkovDeleniaNa14SPozicijamiStepenej;
//
//
//        if (nePodhoditChislo)
//        {
//            // sled loop v whil
//            continue;
//        }
//
//        iteracia++;
//
//        cout << "iteracia " << iteracia << " chislo " << tekushiiInt << endl;
//
//        if(n == iteracia)
//        {
//            cout << tekushiiInt<<endl;
//            break;
//        }
//
//    }
//    auto t2 = std::chrono::high_resolution_clock::now();
//    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
//    std::cout <<"execution time: "<< duration<<" microseconds."<<endl;
//
//    return 0;
//}
