//#include "MathLibrary.h"
//using namespace std;
//
//    int main()
//    {
//        int sizeX = 10 , sizeY = 10; 
//        float proizvedenie = 0, sum = 0;
// 
//        int* X = new int[sizeX];
//        float* Y = new float[sizeY];
//        float** C = new float* [sizeX];
//        for (int i = 0; i < sizeX; i++)
//            C[i] = new float[sizeY];
//
//        print_matrix_x(X, sizeX);
//        starline();
//        print_matrix_y(Y, sizeY);
//        starline();
//        noviimassiv(X, Y, C, sizeX, sizeY);
//        starline();
//        delete[] X; 
//        delete[] Y; 
//            
//        for (int i = 0; i < sizeX; i++)
//        {
//            delete[] C[i];
//        }
//      
//        delete[] C;
//        cout << "Memory cleared." << endl;
//            
//
//
//        return 0;
//    }
