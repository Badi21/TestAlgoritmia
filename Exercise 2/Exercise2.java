// liberia para leer por entrada
import java.util.Scanner;

public class PeopleClasification {
     // Main principal
    public static void main(String[] args) {

         // Necesitamos crear el objeto scanner
        Scanner scanner = new Scanner(System.in);

        // Creamos una estructura persona
        class Person {
            char sex;
            char age;
        }

        // Creamos un array de longitud 50
        Person[] People = new Person[50];

        // Recorremos el array para rellenarlo
        for (int i = 0; i < 50; ++i) {
            System.out.print("Enter the sex of the person" + (i + 1) + ": ");
            People[i] = new Person();
            People[i].sex = scanner.next().charAt(0);

            System.out.print("Enter the age of person " + (i + 1) + ": ");
            People[i].age = scanner.nextInt();
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
        double percentageGratterThan18 = ((double) gratterThan18 / 50) * 100;
        double percentageWoman = ((double) WomanTotal / 50) * 100;

        System.out.println("Number of people gratter than 18 " + gratterThan18 )
        System.out.println("Number of people lower than 18 " +  lowerThan18)
        System.out.println("Number of male people gratter than 18 " +  MalesGratterThan18)
        System.out.println("Number of famale people gratter than 18 " + FamaleLoweThan18)
        System.out.println("Number of people gratter than 18 compared to total " + percentageGratterThan18)
        System.out.println("Number of woman compared to total " + percentageWoman)

        // Close the Scanner object
        scanner.close();
    }
}