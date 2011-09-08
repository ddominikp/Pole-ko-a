#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

float r, pole, obw;
const double PI=3.14159265;

int main(int argc, char **argv){
    if(argc==2 && argv[1]>0){
        r = atof(argv[1]);
    } else {
        cout <<"Podaj promien kola: ";
        if(!(cin >> r)){
            cout <<"Promien nie jest liczba zmiennoprzecinkowa."<<endl;
            return 0;
        }
    }
    if(r>0){
        pole = PI*pow(r,2.0);
        obw = 2*PI*r;
        cout <<"Pole kola o promieniu "<<r<<" wynosi "<<pole<<" zas jego obwod "<<obw<<endl;
    } else cout <<"Promien musi byc wiekszy od zera!\n";
    return 0;
}
