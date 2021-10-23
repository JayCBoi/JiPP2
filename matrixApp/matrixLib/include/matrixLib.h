//
// Created by zbins on 19.10.2021.
//
#include <iostream>
#include <cmath>
using namespace std;

///Adds two matrices
///\param a first matrix
///\param b second matrix
///\param x rows
///\param y columns
///\return sum of two matrices
int ** addMatrix(int** a, int** b, int x, int y);
double ** addMatrix(double** a, double** b, int x, int y);

///Subtracts two matrices
///\param a first matrix
///\param b second matrix
///\param x rows
///\param y columns
///\return difference of two matrices
int ** subtractMatrix(int** a, int** b, int x, int y);
double ** subtractMatrix(double** a, double** b, int x, int y);

///Multiplies two matrices
///\param a first matrix
///\param b second matrix
///\param x1 rows(1st)
///\param y1 columns(1st)
///\param y2 columns(2nd)
///\return multiplication of two matrices
int ** multiplyMatrix(int** a, int** b, int x1, int y1, int y2);
double ** multiplyMatrix(double** a, double** b, int x1, int y1, int y2);

///Multiplies matrix by the given scalar
///\param a matrix
///\param x rows
///\param y columns
///\param q scalar
///\return matrix multiplied by given scalar
int ** multiplyByScalarMatrix(int** a, int x, int y, int q);
double ** multiplyByScalarMatrix(double** a, int x, int y, double q);

///Transposes given matrix
///\param a matrix
///\param x rows
///\param y columns
///\return transposed matrix
int ** transposeMatrix(int** a, int x, int y);
double ** transposeMatrix(double** a, int x, int y);

///Raises the matrix to n-th power
///\param a matrix
///\param x rows
///\param y columns
///\param n power
///\return matrix raised to n-th power
int ** powerMatrix(int** a, int x, int y, unsigned int n);
double ** powerMatrix(double** a, int x, int y, unsigned int n);

///Counts the matrices determinant
///\param a matrix
///\param n rows
///\return the determinant
int determinantMatrix(int** a, int n);
double determinantMatrix(double** a, int n);

///Determines whether the matrix is diagonal
///\param a matrix
///\param x rows
///\param y columns
///\return true if matrix is diagonal, false otherwise
bool matrixIsDiagonal(int** a, int x, int y);
bool matrixIsDiagonal(double** a, int x, int y);

///Sorts rows in given matrix
///\param a matrix
///\param x rows
///\param y columns
///\return matrix with sorted rows (inc)
void sortRowsInMatrix(int** a, int x, int y);

///Sorts an array (inc)
///\param a array
///\param h length
void sortRow(int* a, int h);

///Swaps two variable values
///\param a reference to 1-st variable
///\param b reference to 2-nd variable
void swap(int& a,int& b);
void swap(double& a, double& b);

///Swaps two rows in a matrix
///\param a matrix
///\param c columns
///\param n row to swap
///\param m row to swap
void swapRows(double **a, int c, int n, int m);

///Displays given matrix
///\param a matrix
///\param x rows
///\param x columns
void displayMatrix(int** a, int x, int y);
void displayMatrix(double** a, int x, int y);

///Displays documentation
void help();

//Helpers
///Gets basic errors, stops the program
///\param errorMsg message to be displayed when error comes up
void error(const string& errorMsg);