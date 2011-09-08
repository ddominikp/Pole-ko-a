#include <iostream>
#include <cmath>

using namespace std;

float r, pole, obw;
const double PI=3.14159265;

int main(){
    cout <<"Podaj promien kola: ";
    cin >> r;
    if(r>0){
        pole = PI*pow(r,2.0);
        obw = 2*PI*r;
        cout <<"\nPole kola o promieniu "<<r<<" wynosi "<<pole<<" zas jego obwod "<<obw<<".";
    } else cout <<"Promien musi byc wiekszy od zera!\n";
    return 0;
}
