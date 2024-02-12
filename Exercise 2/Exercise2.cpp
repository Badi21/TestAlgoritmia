// == Ejercicio 2
/* Escriba un algoritmo que visualice una clasificación de 50 personas según edad y sexo.
Deberá mostrar los siguientes resultados:
a. Cantidad de personas mayores de edad (18 años o más).
b. Cantidad de personas menores de edad.
c. Cantidad de personas masculinas mayores de edad.
d. Cantidad de personas femeninas menores de edad.
e. Porcentaje que representan las personas mayores de edad respecto al total de
personas.
f. Porcentaje que representan las mujeres respecto al total de personas.
Utilice la instrucción LEER PERSONAS al inicio del programa para cargar los datos de las
50 personas en un variable, PERSONAS, que actúa como un vector de 50 posiciones.
Cada elemento de PERSONAS es de un tipo estructurado que dispone dos campos:
SEXO y EDAD.*/

#include <iostream>
#include <sstream>

using namespace std;


// Creamos un Objeto o tambien llamado tipo, formado por sexo y edad
struct Person {
    char sex;
    int age;
}

int main (void) {
    // Definimos un array con almacenamiento 50
    Person People[50];

    // Leemos los datos para rellenar el array
    for (int i = 0; i < 50; i ++) {
        cout << "Enter the sex of the person " << i + 1 << " :"
        cin >> People[i].sex

        cout << "Enter the age of the person " << i + 1 << " :"
        cin >> People[i].age
    }

    // Declaramos las variables que necesitamos
    int gratterThan18 = 0;
    int lowerThan18 = 0;
    int MalesGratterThan18 = 0;
    int FamaleLoweThan18 = 0;
    int WomanTotal = 0;

    for(int i = 0; i < 50; i ++ ){
        if (People[i].age >= 18) {
            gratterThan18++;

            if (People[i].sex == "M") MalesGratterThan18++;
        } else {
            lowerThan18++;
            if (People[i].sex == "F") FamaleLoweThan18++; WomanTotal++;
        }
    }

    // Calculamos los porcentajes
    double percentageGratterThan18 = (static_cast<double>(gratterThan18) / 50) * 100;
    double percentageWoman = (static_cast<double>(WomanTotal) / 50) * 100;

    // Mostramos por pantallas
    cin << "Number of people gratter than 18 " << gratterThan18 << endl;
    cin << "Number of people lower than 18 " << lowerThan18 << endl;
    cin << "Number of male people gratter than 18 " << MalesGratterThan18 << endl;
    cin << "Number of famale people gratter than 18 " << FamaleLoweThan18 << endl;
    cin << "Number of people gratter than 18 compared to total " << percentageGratterThan18 << endl;
    cin << "Number of woman compared to total " << percentageWoman << endl;

    return 0
}