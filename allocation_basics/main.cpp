#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    //DYNAMICZNA ALOKACJA
    int a,b,c;
    cout << "Podaj rozmiary (3): ";
    cin >> a >> b >> c;

    int*** tab = new int**[a];
    for(int i=0;i<a;++i){
        tab[i] = new int*[b];
    }
    for(int i=0;i<a;++i){
        for(int j=0;j<b;++j){
            tab[i][j] = new int[c];
        }
    }
    for(int i=0;i<a;++i){
        for(int j=0;j<b;++j){
            delete [] tab[i][j];
        }
    }

    for(int i=0;i<a;i++) delete [] tab[i];
    delete [] tab;


    return 0;
}