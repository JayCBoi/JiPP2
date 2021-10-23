#include <iostream>
#include "matrixLib.h"

using namespace std;

int main(int argc, char *argv[])
{
    //check if params right
    bool flag=true;
    const string params[8] = {"help", "addMatrix", "subtractMatrix", "multiplyMatrix", "multiplyByScalarMatrix", "transposeMatrix", "determinantMatrix", "matrixIsDiagonal"};
    if(argc!=2){
        help();
        error("Only one parameter required to run this program.");
    }

    for(int k = 0; k<8 &&flag; ++k)if((string)argv[1]==params[k])flag=false;
    if(flag){
        help();
        error("No such parameter. See the documentation above for details.");
    }

    if((string)argv[1]=="help"){
        help();
        exit(2);
    }

    //intro
    short int rows1, cols1, rows2, cols2;
    cout<<"|MATRIX CALCULATOR 3000|"<<endl;
    cout<<"Chosen method:"<<(string)argv[1]<<endl<<endl;
    cout<<"1st matrix rows & cols:";
    cin>>rows1>>cols1;
    if(!cin)error("That is not a number!");
    cout<<"2nd matrix rows & cols:";
    cin>>rows2>>cols2;
    if(!cin)error("That is not a number!");

    //create matrices
    int **tab1 = new int* [rows1], **tab2 = new int* [rows2];
    for(int i=0; i<rows1; i++)tab1[i] = new int[cols1];
    for(int i=0; i<rows2; i++)tab2[i] = new int[cols2];

    //fill the matrices
    cout<<"Generating matrices ..."<<endl;
    cout<<"[1 MATRIX] Give the corresponding values, row by row:"<<endl;
    for(int i=0;i<rows1;i++){
        for(int j=0; j<cols1; j++){
            cout<<"Matrix1["<<i<<"]["<<j<<"]:";
            cin>>tab1[i][j];
            if(!cin)error("That is not a number!");
        }
        cout<<endl;
    }

    cout<<"[2 MATRIX] Give the corresponding values, row by row:"<<endl;
    for(int i=0;i<rows2;i++){
        for(int j=0; j<cols2; j++){
            cout<<"Matrix1["<<i<<"]["<<j<<"]:";
            cin>>tab2[i][j];
            if(!cin)error("That is not a number!");
        }
        cout<<endl;
    }

    //display chosen matrices
    cout<<"Given matrices:"<<endl;
    displayMatrix(tab1,rows1,cols1);
    cout<<endl;
    displayMatrix(tab2,rows2,cols2);


    //result
    cout<<"___________"<<endl;
    cout<<"Chosen method: "<<(string)argv[1]<<endl;
    cout<<"The result:"<<endl;
    if((string)argv[1]=="addMatrix"){
        displayMatrix(addMatrix(tab1,tab2,rows1,cols1), rows1, cols1);

    }else if((string)argv[1]=="subtractMatrix"){
        displayMatrix(subtractMatrix(tab1,tab2,rows1,cols1), rows1, cols1);

    }else if((string)argv[1]=="multiplyMatrix"){
        displayMatrix(multiplyMatrix(tab1,tab2,rows1,cols1,cols2),rows1,cols2);

    }else if((string)argv[1]=="multiplyByScalarMatrix"){
        int q;
        cout<<"Pick the scalar:";
        cin>>q;
        if(!cin)error("That is not a number!");
        cout<<endl;

        displayMatrix(multiplyByScalarMatrix(tab1,rows1,cols1,-2), rows1, cols1);
        cout<<endl;
        displayMatrix(multiplyByScalarMatrix(tab2,rows2,cols2,-2), rows1, cols1);

    }else if((string)argv[1]=="transposeMatrix"){
        displayMatrix(transposeMatrix(tab1,rows1,cols1), cols1, rows1);
        cout<<endl;
        displayMatrix(transposeMatrix(tab2,rows2,cols2), cols2, rows2);

    }else if((string)argv[1]=="powerMatrix"){
        displayMatrix(powerMatrix(tab1,rows1,cols1,2),rows1,cols1);
        cout<<endl;
        displayMatrix(powerMatrix(tab2,rows2,cols2,2),rows2,cols2);
    }else if((string)argv[1]=="determinantMatrix"){
        cout<<determinantMatrix(tab1,rows1);
        cout<<endl;
        cout<<determinantMatrix(tab2,rows2);

    }else if((string)argv[1]=="matrixIsDiagonal"){
        cout<<"Matrix1 is"<<(matrixIsDiagonal(tab1,rows1,cols1)?"":" not")<<" diagonal.";
        cout<<endl;
        cout<<"Matrix2 is"<<(matrixIsDiagonal(tab2,rows2,cols2)?"":" not")<<" diagonal.";
    }

    //clear the memory
    for(int i=0;i<rows1;i++) delete tab1[i];
    for(int i=0;i<rows2;i++) delete tab2[i];
    delete [] tab1;
    delete [] tab2;

    return 0;
}
