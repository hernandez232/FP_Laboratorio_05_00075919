#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int opcion;
    float n=0, a, suma=0, media=0;
    cout << "Ingrese la cantidad de numeros a operar: ";
    cin >> n;
    cout << endl;

    for (int i=1; i<=n; i++){
        cout << "Ingrese el valor del numero: ";
        cin >> a;
        suma += a;
    }

    media = suma / n;
    cout << endl << "La media aritmetica de los numeros ingresados es: " << media;
    return 0;
}