#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
    int n=0, i=0, fac=1;
    cout << "Digite un numero entero: ";
    cin >> n;

    for (i=n; i>=1; i--){
        fac *=i;
    }
    cout <<endl;
    cout << "El factorial del numero ingresado es: "<<fac;
}
