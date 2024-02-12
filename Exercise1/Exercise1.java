// liberia para leer por entrada
import java.util.Scanner;


public class ParOrImpar {
    // Main principal
    public static void main(String[] args) {

        // Necesitamos crear el objeto scanner
        Scanner scanner = new Scanner(System.in);

        // Leemos el numero por entrada
        System.out.print("Insert the number: ");
        int number = scanner.nextInt();

        // Procedemso a comprobar
        if(number % 2 == 0) {
            system.out.println("The descending numbers " + number)
            for (int i = number; i >= 0; i -= 2 ){
                System.out.println(i + " ");
            }
        } else {
            system.out.println("The descending numbers " + number)
            for (int i = number; i >= 1; i -= 1 ){
                System.out.println(i + " ");
            }
        }

        // cerramos el objeto scanner
        scanner.close();
    }
}