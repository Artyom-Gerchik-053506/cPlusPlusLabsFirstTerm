//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//struct students
//{
//    string name;
//    int ID;
//};
//
//int main ()
//{
//    string name;
//    struct students tesStudents[1];
//    int ID = 0;
//    ifstream myfile ("test.txt");
//    if (myfile.is_open())
//    {
//        while ( !myfile.eof() )
//        {
//            myfile >> name >> ID;
//            tesStudents[0].name = name;
//            tesStudents[0].ID = ID;
//        }
//        myfile.close();
//    }
//    else
//    {
//        cout << "Unable to open file";
//    }
//    
//    cout <<tesStudents[0].name<<endl;
//    cout <<tesStudents[0].ID<<endl;
//    
//    
//    return 0;
//}
