// MathLibrary.cpp

#include "MathLibrary.h"

void print_matrix_x(int* X, int sizeX)
{
    cout << "Elementy massiva X: " << endl;


    for (int i = 0; i < sizeX; i++)
    {
        cout << "X[" << i+1 << "]: ";
        cin >> X[i];
    }

    cout << "Massiv X: " << endl;

    for (int i = 0; i < sizeX; i++)
    {
        cout << setw(3) << X[i];
    }
}

void print_matrix_y(float* Y, int sizeY)
{
    cout << "Massiv Y: " << endl;

    for (int i = 0; i < sizeY; i++)
    {
        Y[i] = 0.1 * tan(0.1 * i);
        cout << Y[i]<<"  ";
    }
}

void noviimassiv(int* X, float* Y,float* C[], int sizeX,int sizeY)
{
    float proizvedenie = 0, sum =0;
    cout << "Novii massiv: " << endl;
    for (int i = 0; i < sizeY; i++)
    {
        Y[i] = 0.1 * tan(0.1 * i);
        for (int k = 0; k < sizeX; k++)
        {
            C[i][k] = X[k] * Y[i];
            cout << setw(10) << C[i][k];
            
        }
        cout << endl;

    }
    cout << endl;
}

void starline()
{
    cout << endl;
    for (int i = 0; i < 101; i++)
    {
        cout << "*";
    }
    cout << endl;

}

void print_matrix_dynamic(int* matrix[], int N, int M)
{
    srand(time(NULL));
    cout << "Array: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matrix[i][j] = rand() % 10+1;
            cout << setw(4) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void matrix_dynamic_chetn_stolbi_sum_avg(int* matrix[],int N, int M)
{
    int count = 0, sum = 0, counteravg = 0;
    float avg = 0, avgallmatrix=0;
    int** chetnstolb = new int* [N];
    for (int i = 0; i < N; i++)
        chetnstolb[i] = new int[M];
    cout << "Chetnie stolby & nechetnie elementy v nix : ";
    for (int j = 0; j < M; j++)
    {
            for (int i = 0; i < N; i++)
            {
                count = j % 2;
                if (count == 1)
                {
                    if (matrix[i][j] % 2 != 0)
                    {
                        chetnstolb[i][j] = matrix[i][j];
                        sum += chetnstolb[i][j];
                        cout << setw(4) << chetnstolb[i][j] << " ";
                    }

                }
                
            }

            if (sum != 0)
            {
                cout << setw(4) << "     Sum is: " << sum;
                avg = (float)sum / N;
                cout << setw(4) << "     Avg is: " << avg;
                avgallmatrix += avg;
                counteravg++;

            }
            sum = 0;
            avg = 0;
            
            cout << endl;
    }
    cout << "Avg of matrix: " << (float)avgallmatrix / counteravg;

    for (int i = 0; i < N; i++)
    {
        delete[] chetnstolb[i];
    }

    delete[] chetnstolb;
}

void glavnaya_diagonal_chetnie_multiplication(int* matrix[], int N, int M)
{
    cout << "Chetnie na glavnoi diagonali: ";
    int count = 0, abcd =0, mult = 1;
    int* matrixdiagonal = new int[N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i == j)
            {
                matrixdiagonal[i] = matrix[i][i];
                count++;
            }
        }
    }
   
        for (int i = 0; i < N; i++)
        {
            if (matrixdiagonal[i] % 2 == 0)
            {
                cout << setw(4) << matrixdiagonal[i];
            }
        }
        cout << endl;
        cout << "Multiplication: ";
        for (int i = 0; i < count; i++)
        {
            if (matrixdiagonal[i] % 2 == 0)
            {
                mult *= matrixdiagonal[i];
            }
        }

        cout << mult << endl;
        delete[] matrixdiagonal;
   
}

void delete_matrix(int* matrix[], int N)
{
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
    cout << "Memory cleared." << endl;
}

void print_matrix_dynamic_float(double* matrix[], int N, int M)
{
    srand(time(NULL));
    cout << "Array: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matrix[i][j] = (double)(rand() % 100)/10;
            cout << setw(4) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void delete_matrix_float(double* matrix[], int N)
{
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
    cout << "Memory cleared." << endl;
}

void nyli_matrix_float(double* matrix[], int N, int M)
{
    int count = 0, abcd = 0, mult = 1;
    double** nylimatrix = new double* [N];
    for (int i = 0; i < N; i++)
        nylimatrix[i] = new double[M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (matrix[i][j] == 0)
            {
                nylimatrix[i][j] = matrix[i][j];
                cout << nylimatrix[i][j] << " in position: [" << i+1 << "][" << j+1 << "]" << endl;

                count++;
            }
        }
    }
    cout << "Vsego nylei: " << count;
}

void revers_matrix_float(double* matrix[], int N, int M)
{
    //При реверсе массива первый элемент становится последним,а полседний
    //первым; второй - предпоследним, а предпоследний - вторым;
    //третий элемент уходит на место третьего с конца, а тот на место третьего и т. д.
    cout << "Reversed array: " << endl;
    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = M - 1; j >= 0; j--)
        {
            cout << setw(4) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int funcforadd1star(int p, int q)
{
    int F = 0;
    if (q >= p)
    {
        if (p % 10 > 0)
        {
            F = p % 10;
        }

        else if (p == 0)
        {
            F = 0;
        }

        else
        {
            F = p / 10;
        }
        return F + funcforadd1star(p + 1, q);
    }

    else
    {
        return 0;
    }

}

long funcadd3star(long n)
{
    if (n == 0) return 0;
    long a = (n + 1) / 2;
    return a * a + funcadd3star(n / 2);
}