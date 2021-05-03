// MathLibrary.h
#pragma once
#include <iostream>
#include <iomanip>
#include <ctime>
#include <math.h>
using namespace std;

void print_matrix_x(int* X, int sizeX);

void print_matrix_y(float* Y, int sizeY);

void noviimassiv(int* X, float* Y, float* C[], int sizeX, int sizeY);

void starline();

void print_matrix_dynamic(int* matrix[], int N, int M);

void print_matrix_dynamic_float(double* matrix[], int N, int M);

void glavnaya_diagonal_chetnie_multiplication(int* matrix[], int N, int M);

void delete_matrix(int* matrix[], int N);

void delete_matrix_float(double* matrix[], int N);

void nyli_matrix_float(double* matrix[], int N, int M);

void revers_matrix_float(double* matrix[], int N, int M);

void matrix_dynamic_chetn_stolbi_sum_avg(int* matrix[], int N, int M);

int funcforadd1star(int p, int q);

long funcadd3star(long n);