// == Ejercicio 3
/* Desarrolle un algoritmo para el cálculo del salario de un trabajador. El importe
liquidado (sueldo) depende de una tarifa o precio por hora establecida y de un
condicionante sobre las horas trabajadas: si la cantidad de horas trabajadas es mayor a
40 horas, la tarifa se incrementa en un 50% para las horas extras. Calcular el sueldo
recibido por el trabajador en base las horas trabajadas y la tarifa. Utilice las
instrucciones LEER HORASTRABAJADAS y LEER TARIFA al inicio del programa para
cargar los valores en las variables HORASTRABAJADAS y TARIFA.*/

#include <iostream>
#include <sstream>

using namespace std;

// tiempo predefinido por el enunciado, en una constante global

const TIME = 40;

int main (void) {
    
    // Declaramos horas trabajadas y trarifa
    double hourPerWork, rate

    // Leemos las horas trabajadas
    cout << " Insert the hours that you work: ";
    cin >> hourPerWork;

    // leemos la tarifa
    cout << "Inser the rate per hour: "
    cin >> rate;

    // creamos una variable en la que guardaremos el sueldo final
    double salary;

    if (hourPerWork > TIME) {
        // mayor que TIME
        salary = TIME * rate + (hourPerWork - TIME ) * (1.5 * rate);
    } else {
        // menor que TIME
        salary = hourPerWork * rate;
    }

    // Mostramos el sueldo
    cout << "The salary that the worker recive is: " << salary << endl;

    return 0;
}