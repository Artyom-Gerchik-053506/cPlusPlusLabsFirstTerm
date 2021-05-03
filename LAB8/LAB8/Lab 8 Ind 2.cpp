//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <time.h>
//#include <fstream>
//
//using namespace std;
//
//
//struct Worker
//{
//    int tabelNomer;
//    string surname;
//    string name;
//    string otchestvo;
//    string sity;
//    int markMath;
//    int markPhysics;
//    int markRussian;
//    float averageMark;
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
//    Write = 7,
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
//        cout << "1 - Enter students from file." << endl;
//        cout << "2 - Take a look of database." << endl;
//        cout << "3 - Add student manually." << endl;
//        cout << "4 - Search." << endl;
//        cout << "5 - Edit & Delete." << endl;
//        cout << "6 - Sort(IND)." << endl;
//        cout << "7 - Write to file." << endl;
//        cout << "0 - Exit." << endl;
//        cout << endl;
//        cout << "Your choice: ";
//        cin >> i;
//        cout << endl;
//        if(i <= 7 && i >= 0)
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
//    cout <<"(Enter information)"<<endl;
//    cout << "Name: ";
//    cin >> worker->name;
//    cout << endl;
//    cout << "Surname: ";
//    cin >> worker->surname;
//    cout <<endl;
//    cout << "Otchestvo: ";
//    cin >> worker->otchestvo;
//    cout << endl;
//    cout << "City: ";
//    cin >> worker->sity;
//    cout << endl;
//    cout << "MarkMath: ";
//    cin >> worker->markMath;
//    cout <<endl;
//    cout << "MarkPhysic: ";
//    cin >> worker->markPhysics;
//    cout << endl;
//    cout << "MarkRussian: ";
//    cin >> worker->markRussian;
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
//        cout << "Students: " << kolvoWorkerov << endl;
//        cout <<"Enter number of student: ";
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
//    printf("|----------------------------------------------------------------------------------------------------------------------------------|\n");    printf("|№ ");
//    printf("%s","|");
//    printf("%-15s","Surname");
//    printf("%s","|");
//    printf("%-15s","Name");
//    printf("%s","|");
//    printf("%-15s","Otchestvo");
//    printf("%s","|");
//    printf("%-15s","City");
//    printf("%s","|");
//    printf("%-15s","Math");
//    printf("%s","|");
//    printf("%-15s","Physics");
//    printf("%s","|");
//    printf("%-15s","Russian");
//    printf("%s","|");
//    printf("%-15s","Average");
//    printf("%s","|\n");
//    printf("|----------------------------------------------------------------------------------------------------------------------------------|\n");
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
//    printf("%-15s", worker.sity.c_str());
//    printf("%s","|");
//    printf("%-15d",worker.markMath);
//    printf("%s","|");
//    printf("%-15d",worker.markPhysics);
//    printf("%s","|");
//    printf("%-15d",worker.markRussian);
//    printf("%s","|");
//    printf("%-15f",worker.averageMark);
//    printf("%s","|\n");
//    printf("|----------------------------------------------------------------------------------------------------------------------------------|\n");
//
//}
//
//void sortByMark(int kolvoWorkerov, Worker* AllWorkers)
//{
//    for (int i = 0; i < kolvoWorkerov; i++)
//    {
//        for (int j = 0; j < kolvoWorkerov - 1; j++)
//        {
//            if (AllWorkers[i].sity == "Minsk" && AllWorkers[i].averageMark >= 4.5)
//                //                (AllWorkers[i].surname.at(0) <= AllWorkers[j].surname.at(0)))
//            {
//
//                Worker WorkerAtI = AllWorkers[i];
//                Worker WorkerAtJ = AllWorkers[j];
//                AllWorkers[i] = WorkerAtJ;
//                AllWorkers[j] = WorkerAtI;
//
//            }
//        }
//    }
//}
//
//void sortBySurname(int kolvoWorkerov, Worker* AllWorkers)
//{
//    for(int i = 0; i < kolvoWorkerov; i++)
//    {
//        for(int j = 0; j < kolvoWorkerov - 1; j++)
//        {
//            if((AllWorkers[i].sity == "Minsk" && AllWorkers[i].averageMark >= 4.5) && (AllWorkers[j].sity == "Minsk" && AllWorkers[j].averageMark >= 4.5))
//            {
//                if(AllWorkers[i].surname.at(0) < AllWorkers[j].surname.at(0) )
//                {
//                    Worker WorkerAtI = AllWorkers[i];
//                    Worker WorkerAtJ = AllWorkers[j];
//                    AllWorkers[i] = WorkerAtJ;
//                    AllWorkers[j] = WorkerAtI;
//                }
//            }
//        }
//
//    }
//
//}
//
//
//
//void zaborDataForWorker(int tabelNumber, Worker* allWorkers, int kursor)
//{
//
//    extruct(allWorkers);
//
//    allWorkers->tabelNomer = tabelNumber;
//
//    allWorkers->averageMark = (allWorkers->markMath + allWorkers-> markPhysics + allWorkers-> markRussian)/3.0 ;
//
//}
//
////void zaborData(int kolvoWorkerov, Worker* allWorkers)
////{
////    for(int kursor = 0; kursor < kolvoWorkerov; kursor++)
////    {
////        cout <<"Information about "<<kursor + 1<<" worker."<<endl;
////
//////        int tabelNumber = 1;
//////
//////        if(kursor == 0)
//////        {
//////            tabelNumber = 1;
//////        }
//////        else
//////        {
//////            tabelNumber = allWorkers[kursor - 1].tabelNomer + 1;
//////        }
////        zaborDataForWorker(&allWorkers[kursor], kursor);
////
////    }
////}
//
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
////void vvodWorkerov()
////{
////    srand(time(NULL));
////
////    cout <<"Skoka workerov: ";
////    cin >> kolvoWorkerov;
////    AllWorkers = new Worker[kolvoWorkerov];
////
////    zaborData(kolvoWorkerov, AllWorkers);
////}
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
//        cout <<"42 - Search by city"<<endl;
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
//    string tempCity;
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
//                    cout <<"Found student(s)"<<endl;
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
//            cout << "Enter city: ";
//            cin >> tempCity;
//            for(int kursor = 0; kursor < kolvoWorkerov; kursor++)
//        {
//            if(AllWorkers[kursor].sity == tempCity)
//            {
//                if(counter == 0)
//                {
//                    cout <<"Found student(s)"<<endl;
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
//            break;
//
//
//    }
//
//
//}
//
//void dumpToFile ()
//{
//    string name;
//    ofstream myfile;
//    int kursor = 0;
//
//    myfile.open ("OUTPUT.txt", ofstream::out | ios::trunc);
//
//    while(AllWorkers[kursor].averageMark >= 4.5 && AllWorkers[kursor].sity == "Minsk")
//    {
//        myfile << AllWorkers[kursor].surname;
//        myfile << endl;
//        kursor++;
//    }
//
//    myfile.close();
//
//}
//
//void getInfoFromFile()
//{
//    cout << "Skoka studentov zapishem v bazy?(ix vsego 6): ";
//    cin >> kolvoWorkerov;
//    AllWorkers = new Worker[kolvoWorkerov];
//
//    int tabelNomer;
//    string surname;
//    string name;
//    string otchestvo;
//    string city;
//    int markMath;
//    int markPhysics;
//    int markRussian;
//
//    ifstream myfile;
//
//    myfile.open ("INPUT.txt");
//
//    for(int kursor = 0; kursor < kolvoWorkerov; kursor++)
//    {
//        myfile >> tabelNomer >> surname >> name >> otchestvo >> city >> markMath >> markPhysics >> markRussian;
//        AllWorkers[kursor].tabelNomer = tabelNomer;
//        AllWorkers[kursor].surname = surname;
//        AllWorkers[kursor].name = name;
//        AllWorkers[kursor].otchestvo = otchestvo;
//        AllWorkers[kursor].sity = city;
//        AllWorkers[kursor].markMath = markMath;
//        AllWorkers[kursor].markPhysics = markPhysics;
//        AllWorkers[kursor].markRussian = markRussian;
//        AllWorkers[kursor].averageMark = ((AllWorkers[kursor].markMath +  AllWorkers[kursor].markPhysics + AllWorkers[kursor].markRussian) * 1.0)/3;
//    }
//
//    myfile.close();
//
//}
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
//                //                vvodWorkerov();
//                getInfoFromFile();
//                break;
//
//            case Look:
//                printArrayKrasivo();
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
//                cout <<"Edited table(Sort by city Minsk & Surnames alphabetically & avg >= 4.5)"<<endl;
//                sortByMark(kolvoWorkerov, AllWorkers);
//                sortBySurname(kolvoWorkerov, AllWorkers);
//                printArrayKrasivo();
//                break;
//
//            case Write:
//                dumpToFile();
//                break;
//        }
//    }
//
//
//    return 0;
//}
