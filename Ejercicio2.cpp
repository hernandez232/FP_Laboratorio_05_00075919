#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, i, a=0, b=1, fibo;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    cout << endl;
    
    if (n==0){
        cout << "La respuesta es: "<<n;
    } else {
        cout << "La sucesion de Fibonacci que corresponde al numero ingresado es: "<<"1 ";
        for (i=1; i<n; i++){
            fibo = a + b;
            a = b;
            b = fibo;
            cout << fibo<<" "; 

        }
        
        
    }
    return 0;
}