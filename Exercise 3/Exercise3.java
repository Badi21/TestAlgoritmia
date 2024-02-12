// liberia para leer por entrada
import java.util.Scanner;

public class CalculateSalary {

    // Main principal
    public static void main(String[] args) {
        // Necesitamos crear el objeto scanner
        Scanner scanner = new Scanner(System.in);

        // Leemos las horas de trabajo
        System.out.print("Insert the hours that you work:");
        double hourPerWork = scanner.nextDouble();

        // Leemos la tarifa
        System.out.print("Inser the rate per hour: ");
        double rate = scanner.nextDouble();

        // creamos una variable en la que guardaremos el sueldo final
        double salary;

        if (hourPerWork > 40) {
            // mayor que 40
            salary = 40 * rate + (hourPerWork - 40) * 1.5 * rate;
        } else {
            // menos que 40
            salary = hourPerWork * rate;
        }

        System.out.println("The salary that the worker recive is" + salary);

        // Close the Scanner object
        scanner.close();
    }

}