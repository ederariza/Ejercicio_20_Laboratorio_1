/*
Ejercicio 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo
(igual de derecha a izquierda que de izquierda a derecha).
Ej: si se ingresa 121 se debe imprimir:
121 es un numero palindromo.
y si se ingresa 123 se debe imprimir:
123 NO es un numero palindromo

            residuo = numero_disminuye%(potencia*10);
            numero_nuevo += residuo;
            numero_disminuye = numero - numero_nuevo;
            potencia *= 10;

            cout << residuo << " "<< numero_nuevo << " " << numero_disminuye << " " << potencia << endl;

        }

        if(numero_nuevo == numero)
            cout << "Es palindromo" <<  endl;
        else
            cout << "No es palindromo" << endl;
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

        int numero;
        int digito = 0;
        int residuo = 0;

        cout << "Ingrese un numero ";
        cin >> numero;

        //Bloque que descompone el numero hallando sus digitos
        int numero_nuevo = numero;
        while (numero_nuevo > 0){

            if (numero_nuevo % 10 != 0)
                digito += 1,
                residuo = numero_nuevo % 10,
                numero_nuevo = numero_nuevo / 10;

        else
                digito += 1,
                residuo = numero_nuevo % 10,
                numero_nuevo = numero_nuevo / 10;

        }

        //Bloque de intrucciones que halla la mayor potencia de 10 del numero ingresado
        int potencia;
        for (int i = 0; i < digito; i++){

            if (i == 0)
                potencia = 1;

            else
                potencia *= 10;
        }

        //Bloque de instrucciones que pone el numero al reves
        int numero_palindromo = 0;
        numero_nuevo = numero;
        while (numero_nuevo > 0){

            if (numero_nuevo % 10 != 0)
                residuo = numero_nuevo % 10,
                numero_palindromo += residuo * potencia,
                numero_nuevo = numero_nuevo / 10,
                potencia /= 10;

            else
                residuo = numero_nuevo % 10,
                numero_palindromo += residuo * potencia,
                numero_nuevo = numero_nuevo / 10,
                potencia /= 10;

        }

        if (numero_palindromo == numero)
            cout << "El numero " << numero << " es palindromo " << endl;

        else
            cout << "El numero " << numero << " no es palindromo " << endl;

        return 0;
    }
