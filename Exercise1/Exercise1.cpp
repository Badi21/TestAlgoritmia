// == Ejercicio 1
/* Escriba un algoritmo que lea un número entero y determine si es par o impar. Si es par,
que escriba todos los pares de manera descendiente desde sí mismo y hasta el cero. Si
es impar, que escriba todos los impares de manera descendiente desde si sí mismo
hasta el uno. Utilice la instrucción LEER NUMERO al inicio del programa para cargar un
número en la variable NUMERO.*/


#include <iostream>
#include <sstream>

using namespace std;


int main (void) {
    
    // Variable en la que guardaremos el valor por entrada
    int number;

    // Leemos el valor por entrada
    cout << "Insert the number"
    cin >> number

    if (number % 2 == 0) {
        // Procedemos a mostrar todos los numeros pares desde el numero introducido
        cout << "The descending numbers " << number << "hasta 0\n"
        for (int i = number; i >= 0; i -= 2 ){
            cout << i << " ";
        }
    } else {
        //  Procedemos a mostrar todos los numeros impares 
        cout << "The descending numbers " << number << "hasta 1\n"
        for (int i = number; i >= 1; i -= 2 ){
            cout << i << " ";
        }
    }

    return 0;
}