/*
Ejercicio 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo
(igual de derecha a izquierda que de izquierda a derecha).
Ej: si se ingresa 121 se debe imprimir:
121 es un numero palindromo.
y si se ingresa 123 se debe imprimir:
123 NO es un numero palindromo
*/

#include <iostream>
using namespace std;

int main(){

    int numero_ingresado;
    int contador = 0;
    cout << "Ingrese el numero: ";
    cin >> numero_ingresado;

    for(int i=1; i<=numero_ingresado; i++) {

        if((numero_ingresado % i) == 0) {
                contador += 1;

        }
    }

    return 0;
}
