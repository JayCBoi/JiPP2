//
// Created by zbins on 19.10.2021.
//
#include <iostream>
using namespace std;

///Adds two matrixes
///\param a first matrix
///\param b second matrix
///\param x rows
///\param y columns
///\return sum of two matrixes
int ** addMatrix(int** a, int** b, int x, int y);

///Subtracts two matrixes
///\param a first matrix
///\param b second matrix
///\param x rows
///\param y columns
///\return difference of two matrixes
int ** subtractMatrix(int** a, int** b, int x, int y);

///Multiplies two matrixes
///\param a first matrix
///\param b second matrix
///\param x1 rows(1st)
///\param y1 columns(1st)
///\param y2 columns(2nd)
///\return multiplication of two matrixes
int ** subtractMatrix(int** a, int** b, int x1, int y1, int x2);

///Multiplies matrix by the given scalar
///\param a matrix
///\param x rows
///\param y columns
///\param q scalar
///\return matrix multiplied by given scalar
int ** subtractMatrix(int** a, int x, int y, int q);

///Transpozes given matrix
///\param a matrix
///\param x rows
///\param y columns
///\return transpozed matrix
int ** subtractMatrix(int** a, int x, int y);

///Raises the matrix to n-th power
///\param a matrix
///\param x rows
///\param y columns
///\param n power
///\return matrix raised to n-th power
int ** powerMatrix(int** a, int x, int y, int n);

///Counts the matrixes determinant
///\param a matrix
///\param x rows
///\param y columns
///\return the determinant
int determinantMatrix(int** a, int x, int y);

///Determines whether the matrix is diagonal
///\param a matrix
///\param x rows
///\param y columns
///\return true if matrix is diagonal, false otherwise
bool matrixIsMatrix(int** a, int x, int y);

///Sorts rows in given matrix
///\param a matrix
///\param x rows
///\param y columns
///\return matrix with sorted rows (inc)
int ** sortRowsInMatrix(int** a, int x, int y);

///Sorts an array (inc)
///\param a array
///\param h length
///\return sorted array (inc)
int * sortRowsInMatrix(int* a, int h);

///Swaps two variable values
///\param a reference to 1-st variable
///\param b reference to 2-nd variable
void swap(int& a,int& b);

