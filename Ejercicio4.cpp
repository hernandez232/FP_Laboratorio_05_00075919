#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
    int opcion, opcion2, n, an=0, si=1, fibo, fac=1;
    float a, b, suma, resta, multi, divi;
    proceso:
    cout << endl;
    cout << "Ingrese el numero de la operacion que desea realizar"<<endl;
    cout << "1. Suma de dos numeros " << endl << "2. Resta de dos numeros " << endl << "3. Multiplicacion de dos numeros" << endl << "4. Division de dos numeros" << endl << "5. Fibonacci de un numero" << endl << "6. Factorial de un numero" << endl << "7. Salir" << endl;
    cout << endl; cout << "Operacion a realizar: "; 
    cin >> opcion;
    cout << endl;
     
    switch (opcion){
            case 1:
            cout << "Ingrese dos numeros: ";
            cin >> a >> b;
            suma = a + b;
            cout << "La suma de los numeros ingresados es: " << suma << endl;
            break;

            case 2:
            cout << "Ingrese dos numeros: ";
            cin >> a >> b;
            resta = a - b;
            cout << "La resta de los numeros ingresados es: " << resta << endl;
            break;

            case 3:
            cout << "Ingrese dos numeros: ";
            cin >> a >> b;
            multi = a * b;
            cout << "La multiplicacion de los numeros ingresados es: " << multi << endl;
            break;

            case 4:
            cout << "Ingrese dos numeros: ";
            cin >> a >> b;
            divi = a / b;
            cout << "La division de los numeros ingresados es: " << divi << endl;
            break;

            case 5:
            cout << "Ingrese un numero entero: ";
            cin >> a;
            cout << "La sucesion de Fibonacci que corresponde al numero ingresado es: " << endl << "1" << endl;
            for (int i=1; i<a; i++){
                fibo = an + si;
                an = si;
                si = fibo;
                cout << fibo << endl;
            }
            break;

            case 6:
            cout << "Ingrese un numero entero: ";
            cin >> a;
            for (int i=a; i>=1; i--){
                fac*=i;
            }
            cout << "El factorial del numero ingresado es: " << fac << endl;
            break;

            default:
            if (opcion < 1 || opcion > 7){
                cout << "Valor ingresado es incorrecto" << endl;
                goto proceso;}
    }
    
    cout << endl;
    if (opcion == 7){
        cout << "Programa finalizado...";
        } else {
            proceso2:
            cout << endl << endl;
            cout << "¿Desea realizar otra operacion?: " << endl << "1. Si" << endl << "2. No" << endl << endl;
            cin >> opcion2;
            if (opcion2 == 1){
                goto proceso;
                }  else {
                    if (opcion2 < 1 || opcion2 > 2){
                        cout << "Valor ingresado es incorrecto";
                        goto proceso2;
                    } else {cout << "Programa finalizado...";}
                }
    }

     cout << endl;
    return 0;
}