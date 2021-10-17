#include <iostream>
#include <string>
using namespace std;

#include "../include/calc.h"
#include "calc.cpp"


int main(int argc, char *argv[])
{
    if(string(argv[1])=="add"){
        if(argc!=4)error(false,2);
        cout<<add(atoi(argv[2]),atoi(argv[3]))<<endl;

    }else if(string(argv[1])=="subtract"){
        if(argc!=4)error(false,2);
        cout<<subtract(atoi(argv[2]),atoi(argv[3]))<<endl;

    }else if(string(argv[1])=="volume"){
        if(argc!=6)error(false,4);
        cout<<volume(atoi(argv[2]),atoi(argv[3]),atoi(argv[4]),atoi(argv[5]))<<endl;

    }else if(string(argv[1])=="help"){
        help();
    }else{
        error(true);
    }
    return 0;
}