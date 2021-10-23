//
// Created by zbins on 19.10.2021.
//
#include "matrixLib.h"

int ** addMatrix(int** a, int** b, int x, int y){
    int** res = new int* [x];
    for(int i=0; i<x; ++i) {
        res[i] = new int[y];
        for (int j = 0; j < y; ++j) res[i][j] = a[i][j] + b[i][j];
    }
    return res;
}
double ** addMatrix(double** a, double** b, int x, int y){
    double** res = new double* [x];
    for(int i=0; i<x; ++i) {
        res[i] = new double[y];
        for (int j = 0; j < y; ++j) res[i][j] = a[i][j] + b[i][j];
    }
    return res;
}

int ** subtractMatrix(int** a, int** b, int x, int y){
    int** res = new int* [x];
    for(int i=0; i<x; ++i) {
        res[i] = new int[y];
        for (int j = 0; j < y; ++j) res[i][j] = a[i][j] - b[i][j];
    }
    return res;
}
double ** subtractMatrix(double** a, double** b, int x, int y){
    double** res = new double* [x];
    for(int i=0; i<x; ++i) {
        res[i] = new double[y];
        for (int j = 0; j < y; ++j) res[i][j] = a[i][j] - b[i][j];
    }
    return res;
}

int ** multiplyMatrix(int** a, int** b, int x1, int y1, int y2){
    int i,j,k;
    int** res = new int* [x1];

    for(i=0; i<x1; ++i) res[i] = new int[y2];
    for(i = 0; i < x1; ++i)
        for(j = 0; j < y2; ++j){
            res[i][j]=0;
            for(k = 0; k < y1; ++k)
                res[i][j] += a[i][k] * b[k][j];
        }
    return res;
}
double ** multiplyMatrix(double** a, double** b, int x1, int y1, int y2){
    int i,j,k;
    double** res = new double* [x1];

    for(i=0; i<x1; ++i) res[i] = new double[y2];
    for(i = 0; i < x1; ++i)
        for(j = 0; j < y2; ++j){
            res[i][j]=0;
            for(k = 0; k < y1; ++k)
                res[i][j] += a[i][k] * b[k][j];
        }
    return res;
}

int ** multiplyByScalarMatrix(int** a, int x, int y, int q){
    for(int i = 0; i < x; ++i)
        for (int j = 0; j < y; ++j)
            a[i][j] *= q;
    return a;
}
double ** multiplyByScalarMatrix(double** a, int x, int y, double q){
    for(int i = 0; i < x; ++i)
        for (int j = 0; j < y; ++j)
            a[i][j] *= q;
    return a;
}

int ** transposeMatrix(int** a, int x, int y){
    int** res = new int* [y];
    for(int i=0; i<y; ++i) {
        res[i] = new int[x];
        for (int j = 0; j < x; ++j) res[i][j] = a[j][i];
    }
    return res;
}
double ** transposeMatrix(double** a, int x, int y){
    double** res = new double* [y];
    for(int i=0; i<y; ++i) {
        res[i] = new double[x];
        for (int j = 0; j < x; ++j) res[i][j] = a[j][i];
    }
    return res;
}

int ** powerMatrix(int** a, int x, int y, unsigned int n){
    int i,j;
    int** res = new int* [x];
    for(i=0; i<x; ++i){
        res[i] = new int[y];
        for(j=0;j<y;++j)res[i][j]=a[i][j];
    }
    for(i=0;i<n-1;++i)res = multiplyMatrix(res,a,x,y,y);

    return res;
}
double ** powerMatrix(double** a, int x, int y, unsigned int n){
    int i,j;
    double** res = new double* [x];
    for(i=0; i<x; ++i){
        res[i] = new double[y];
        for(j=0;j<y;++j)res[i][j]=a[i][j];
    }
    for(i=0;i<n-1;++i)res = multiplyMatrix(res,a,x,y,y);

    return res;
}

int determinantMatrix(int** a, int n){
    int i,j,k;
    double q,det=1;

    auto** temp = new double* [n];
    for(i=0; i<n; ++i){
        temp[i] = new double[n];
        for(j=0;j<n;++j)temp[i][j]=a[i][j];
    }

    if(n==1)return a[n][n];
    for(i=0;i<n-1;++i){
        if(!temp[i][i]){
            for(k=i+1;k<n;++k){
                if(temp[k][i]){
                    swapRows(temp,n,i,k);
                    det*=-1;
                    break;
                }
            }
            if(!temp[i][i])return 0;
        }
        for(j=i+1;j<n;++j){
            q = temp[j][i]/temp[i][i];
            for(k=i;k<n;k++)temp[j][k]-= q*temp[i][k];
        }
    }
    for(i=0;i<n;++i)det*=temp[i][i];
    return (int)round(det);
}
double determinantMatrix(double** a, int n){
    int i,j,k;
    double q,det=1;

    auto** temp = new double* [n];
    for(i=0; i<n; ++i){
        temp[i] = new double[n];
        for(j=0;j<n;++j)temp[i][j]=a[i][j];
    }

    if(n==1)return a[n][n];
    for(i=0;i<n-1;++i){
        if(!temp[i][i]){
            for(k=i+1;k<n;++k){
                if(temp[k][i]){
                    swapRows(temp,n,i,k);
                    det*=-1;
                    break;
                }
            }
            if(!temp[i][i])return 0;
        }
        for(j=i+1;j<n;++j){
            q = temp[j][i]/temp[i][i];
            for(k=i;k<n;k++)temp[j][k]-= q*temp[i][k];
        }
    }
    for(i=0;i<n;++i)det*=temp[i][i];
    return det;
}

bool matrixIsDiagonal(int** a, int x, int y){
    for(int i=0; i<y; ++i){
        for (int j = 0; j < x; ++j){
            if(a[i][j]&&i!=j)return false;
        }
    }
    return true;
}
bool matrixIsDiagonal(double** a, int x, int y){
    for(int i=0; i<y; ++i){
        for (int j = 0; j < x; ++j){
            if(a[i][j]&&i!=j)return false;
        }
    }
    return true;
}

void sortRowsInMatrix(int** a, int x, int y){
    for(int i=0; i<x; ++i)sortRow(a[i],y);
}

void sortRow(int* a, int h){
    while(h) {
        for (int i = 0; i < h-1; ++i)if (a[i] > a[i + 1])swap(a[i], a[i + 1]);
        h-=1;
    }
}

void swap(int& a,int& b){
    a+=b;
    b=a-b;
    a-=b;
}
void swap(double& a,double& b){
    a+=b;
    b=a-b;
    a-=b;
}

void swapRows(double** a, int c, int n, int m){
    for(int i=0;i<c;i++)swap(a[n][i],a[m][i]);
}

void displayMatrix(int** a, int x, int y){
    for(int i=0;i<x;i++)
        for(int j=0; j<y; j++)
            cout<<a[i][j]<<((y-j==1)?"\n":"\t");
}
void displayMatrix(double** a, int x, int y){
    for(int i=0;i<x;i++)
        for(int j=0; j<y; j++)
            cout<<a[i][j]<<((y-j==1)?"\n":"\t");
}

void help(){
    cout<<"MATRIX CALCULATOR 3000 - DOCUMENTATION\n";
    cout<<"Parameters and their uses:\n";
    cout<<"addMatrix\n\tadds two given matrices\n";
    cout<<"subtractMatrix\n\tsubtracts two given matrices\n";
    cout<<"multiplyMatrix\n\tmultiplies two given matrices\n";
    cout<<"multiplyByScalarMatrix\n\tmultiplies two given matrices by given scalar\n";
    cout<<"transposeMatrix\n\ttransposes two given matrices\n";
    cout<<"powerMatrix\n\traises two given matrices to given power\n";
    cout<<"determinantMatrix\n\tcalculates the determinant of the two given matrices\n";
    cout<<"matrixIsDiagonal\n\ttells u whether given matrix is diagonal or not\n";
    cout<<"help\n\tdisplays the documentation\n";
}

void error(const string& errorMsg){
    cout<<errorMsg;
    exit(1);
}

