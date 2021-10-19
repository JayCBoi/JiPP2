//
// Created by zbins on 19.10.2021.
//
#include "matrixLib.h"

//int ** addMatrix(int** a, int** b, int x, int y);
//
//int ** subtractMatrix(int** a, int** b, int x, int y);
//
//int ** subtractMatrix(int** a, int** b, int x1, int y1, int x2);
//
//int ** subtractMatrix(int** a, int x, int y, int q);
//
//int ** subtractMatrix(int** a, int x, int y);
//
//int ** powerMatrix(int** a, int x, int y, int n);
//
//int determinantMatrix(int** a, int x, int y);
//
//bool matrixIsMatrix(int** a, int x, int y);
//
//int ** sortRowsInMatrix(int** a, int x, int y);
//
//int * sortRowsInMatrix(int* a, int h);

void swap(int& a,int& b){
    a+=b;
    b=a-b;
    a=a-b;
}

