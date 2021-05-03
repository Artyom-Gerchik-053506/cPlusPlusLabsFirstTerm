//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <time.h>
//#include <fstream>
//
//using namespace std;
//
//struct Worker
//{
//    string name;
//    string surname;
//    string otchestvo;
//    int tabelNomer;
//    int chasiZaMesyac;
//    int pochasovoiTarif;
//    int itogZaMesyac;
//};
//
//int kolvoWorkerov = 0;
//Worker *AllWorkers;
//
//enum MainMenu  {
//    Exit = 0,
//    Vvod = 1,
//    Look = 2,
//    Add = 3,
//    Search = 4,
//    Edit = 5,
//    Sort = 6,
//};
//
//enum EditandDelete
//{
//
//    EditandDeleteEdit = 51,
//    EditandDeleteDelete = 52,
//};
//
//MainMenu showMainMenu()
//{
//    int i = 0;
//    while (true)
//    {
//        cout << "1 - Enter workers." << endl;
//        cout << "2 - Take a look of database." << endl;
//        cout << "3 - Add worker." << endl;
//        cout << "4 - Search." << endl;
//        cout << "5 - Edit & Delete." << endl;
//        cout << "6 - Sort(IND)." << endl;
//        cout << "0 - Exit." << endl;
//        cout << endl;
//        cout << "Your choice: ";
//        cin >> i;
//        cout << endl;
//        if(i <= 6 && i >= 0)
//        {
//            break;
//        }
//        else
//        {
//            cerr<<"kolxoznik vvedi pravilno"<<endl;
//        }
//    }
//    MainMenu foo = (MainMenu)i;
//    return foo;
//}
//
//void extruct(Worker *worker)
//{
//    cout <<"(Enter only full name, remain - random.)"<<endl;
//    cout << "Name: ";
//    cin >> worker->name;
//    cout << endl;
//    cout << "Surname: ";
//    cin >> worker->surname;
//    cout <<endl;
//    cout << "Patronymic: ";
//    cin >> worker->otchestvo;
//    cout << endl;
//}
//
//void removeWorker(int nomerWorkera)
//{
//
//    AllWorkers[nomerWorkera] = AllWorkers[kolvoWorkerov - 1];
//    kolvoWorkerov--;
//
//    Worker *AllWorkersEdited = new Worker[kolvoWorkerov];
//    for(int kursor = 0; kursor< kolvoWorkerov; kursor++)
//    {
//        AllWorkersEdited[kursor] = AllWorkers[kursor];
//    }
//    delete [] AllWorkers;
//    AllWorkers = AllWorkersEdited;
//
//}
//
//void editWorker(int nomerWorkera)
//{
//
//    Worker *workerToEdit = &AllWorkers[nomerWorkera];
//
//    extruct(workerToEdit);
//
//}
//
//void showEditMenu()
//{
//    int i = 0;
//    while(true)
//    {
//        cout << "50 - Main menu" << endl;
//        cout << "51 - Edit" << endl;
//        cout << "52 - Delete" << endl;
//        cout << endl;
//        cout << "Your choice: ";
//        cin >> i;
//        cout << endl;
//        if(i == 51 || i == 52 )
//        {
//            break;
//        }
//        else if(i == 50)
//        {
//            return;
//        }
//        else
//        {
//            cerr << "kolxoznik vvedi pravilno" << endl;
//        }
//    }
//    EditandDelete action = (EditandDelete)i;
//
//    int nomerWorkeraAsInt = 0;
//
//    while(true)
//    {
//        cout << "Workers: " << kolvoWorkerov << endl;
//        cout <<"Enter number of worker: ";
//        cin >> nomerWorkeraAsInt;
//        if(nomerWorkeraAsInt > 0 && nomerWorkeraAsInt <= kolvoWorkerov)
//        {
//            break;
//        }
//        else
//        {
//            cerr<<"kolxoznik vvedi pravilno"<<endl;
//        }
//    }
//
//    switch(action)
//    {
//        case EditandDeleteEdit:
//
//            editWorker(nomerWorkeraAsInt - 1);
//            break;
//
//        case EditandDeleteDelete:
//            removeWorker(nomerWorkeraAsInt - 1);
//            break;
//    }
//
//}
//
//
//void printTable()
//{
//    printf("|--------------------------------------------------------------------------------------------------|\n");
//    printf("|№ ");
//    printf("%s","|");
//    printf("%-15s","Surname");
//    printf("%s","|");
//    printf("%-15s","Name");
//    printf("%s","|");
//    printf("%-15s","Otchestvo");
//    printf("%s","|");
//    printf("%-15s","Hours");
//    printf("%s","|");
//    printf("%-15s","Tarif");
//    printf("%s","|");
//    printf("%-15s","Total $$$");
//    printf("%s","|\n");
//    printf("|--------------------------------------------------------------------------------------------------|\n");
//}
//
//void printInformation(Worker worker)
//{
//    printf("%s","|");
//    printf("%d ", worker.tabelNomer);
//    printf("%s","|");
//    printf("%-15s", worker.surname.c_str());
//    printf("%s","|");
//    printf("%-15s", worker.name.c_str());
//    printf("%s","|");
//    printf("%-15s", worker.otchestvo.c_str());
//    printf("%s","|");
//    printf("%-15d",worker.chasiZaMesyac);
//    printf("%s","|");
//    printf("%-15d",worker.pochasovoiTarif);
//    printf("%s","|");
//    printf("%-15d",worker.itogZaMesyac);
//    printf("%s","|\n");
//    printf("|--------------------------------------------------------------------------------------------------|\n");
//
//}
//
//void sortByMoney(int kolvoWorkerov, Worker* AllWorkers)
//{
//    for (int i = 0; i < kolvoWorkerov; i++)
//    {
//        for (int j = 0; j < kolvoWorkerov - 1; j++)
//        {
//            if (AllWorkers[j].itogZaMesyac > AllWorkers[i].itogZaMesyac)
//            {
//                Worker WorkerAtI = AllWorkers[i];
//                Worker WorkerAtJ = AllWorkers[j];
//                AllWorkers[i] = WorkerAtJ;
//                AllWorkers[j] = WorkerAtI;
//            }
//        }
//    }
//}
//
//
//
//void zaborDataForWorker(int tabelNumber, Worker* allWorkers,int kursor)
//{
//
//    extruct(allWorkers);
//
//    allWorkers->tabelNomer = tabelNumber;
//
//    allWorkers->chasiZaMesyac = rand()%730 + 1;
//    allWorkers->pochasovoiTarif = rand()%10 + 1;
//    allWorkers->itogZaMesyac = allWorkers->chasiZaMesyac * allWorkers->pochasovoiTarif;
//
//}
//
//void zaborData(int kolvoWorkerov, Worker* allWorkers)
//{
//    for(int kursor = 0; kursor < kolvoWorkerov; kursor++)
//    {
//        cout <<"Information about "<<kursor + 1<<" worker."<<endl;
//
//        int tabelNumber = 1;
//
//        if(kursor == 0)
//        {
//            tabelNumber = 1;
//        }
//        else
//        {
//            tabelNumber = allWorkers[kursor - 1].tabelNomer + 1;
//        }
//        zaborDataForWorker(tabelNumber, &allWorkers[kursor], kursor);
//
//    }
//}
//void printArrayKrasivo()
//{
//    printTable();
//
//    for(int kursor = 0; kursor < kolvoWorkerov; kursor++)
//    {
//        printInformation(AllWorkers[kursor]);
//    }
//    cout << endl;
//}
//
//void vvodWorkerov()
//{
//    srand(time(NULL));
//
//    cout <<"Skoka workerov: ";
//    cin >> kolvoWorkerov;
//    AllWorkers = new Worker[kolvoWorkerov];
//
//    zaborData(kolvoWorkerov, AllWorkers);
//}
//
//void addStrokuVTable()
//{
//    Worker tempWorker;
//    zaborDataForWorker(kolvoWorkerov + 1, &tempWorker, 0);
//
//
//    Worker *AllWorkersEdited = new Worker[kolvoWorkerov + 1];
//    for(int kursor = 0; kursor< kolvoWorkerov; kursor++)
//    {
//        AllWorkersEdited[kursor] = AllWorkers[kursor];
//    }
//    delete [] AllWorkers;
//    AllWorkers = AllWorkersEdited;
//    kolvoWorkerov++;
//    AllWorkersEdited[kolvoWorkerov - 1] = tempWorker;
//
//}
//
//void searchVTable()
//{
//
//    int i = 0;
//    while(true)
//    {
//        cout <<"40 - Main menu"<<endl;
//        cout <<"41 - Search by name"<<endl;
//        cout <<"42 - Search by salary"<<endl;
//        cout << endl;
//        cout <<"Your choice: ";
//        cin >> i;
//        cout << endl;
//        if(i == 41 || i == 42 )
//        {
//            break;
//        }
//        else if(i == 40)
//        {
//            return;
//        }
//        else
//        {
//            cerr<<"kolxoznik vvedi pravilno"<<endl;
//        }
//    }
//    string tempName;
//    int tempSalary = 0;
//    int counter = 0;
//    switch (i)
//    {
//        case 41:
//            cout << "Enter name: ";
//            cin >> tempName;
//            for(int kursor = 0; kursor < kolvoWorkerov; kursor++)
//        {
//            if(AllWorkers[kursor].name == tempName)
//            {
//                if(counter == 0)
//                {
//                    cout <<"Found worker(s)"<<endl;
//                    printTable();
//                    printInformation(AllWorkers[kursor]);
//                    counter++;
//                }
//                else
//                {
//                    printInformation(AllWorkers[kursor]);
//                }
//            }
//        }
//
//            break;
//
//        case 42:
//            cout << "Enter salary: ";
//            cin >> tempSalary;
//            for(int kursor = 0; kursor < kolvoWorkerov; kursor++)
//        {
//            if(AllWorkers[kursor].itogZaMesyac == tempSalary)
//            {
//                if(counter == 0)
//                {
//                    cout <<"Found worker(s)"<<endl;
//                    printTable();
//                    printInformation(AllWorkers[kursor]);
//                    counter++;
//                }
//                else
//                {
//                    printInformation(AllWorkers[kursor]);
//                }
//
//            }
//        }
//            counter = 0;
//
//            break;
//
//
//    }
//
//
//}
//
////void dumpToFile ()
////{
////    string name;
////    ofstream myfile;
////
////    myfile.open ("test.txt", ofstream::out | ofstream::app);
////
////    for(int kursor = 0; kursor < kolvoWorkerov; kursor++)
////    {
////        myfile << AllWorkers[kursor].name;
////        myfile << endl;
////        myfile << AllWorkers[kursor].surname;
////    }
////
////    myfile.close();
////
////}
//
//
//
//
//int main()
//{
//
//    while(true)
//    {
//        MainMenu polzavatelVibral = showMainMenu();
//        switch (polzavatelVibral)
//        {
//
//            case Exit:
//                return 0;
//                break;
//
//            case Vvod:
//                vvodWorkerov();
//                break;
//
//            case Look:
//                printArrayKrasivo();
//                //                dumpToFile();
//                break;
//
//            case Add:
//                addStrokuVTable();
//                break;
//
//            case Search:
//                searchVTable();
//                break;
//
//            case Edit:
//                showEditMenu();
//                break;
//
//            case Sort:
//                cout << endl;
//                cout <<"Edited table(Sort by Total $$$ Lower -> Highest)"<<endl;
//                sortByMoney(kolvoWorkerov, AllWorkers);
//                printArrayKrasivo();
//                break;
//        }
//    }
//
//
//    return 0;
//}
