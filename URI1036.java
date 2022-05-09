import java.io.IOException;
import java.util.Scanner;

public class URI1036 {

    public static void main(String[] args) throws IOException {
        Scanner ler = new Scanner(System.in);

        System.out.println("Insira valor de A: ");
        double A = ler.nextDouble();

        System.out.println("Insira valor de B: ");
        double B = ler.nextDouble();

        System.out.println("Insira valor de C: ");
        double C = ler.nextDouble();

        double bascara = Math.sqrt((B * B) - 4 * (A * C));
        double R1 = (-B + bascara) / (2 * A);
        double R2 = (-B - bascara) / (2 * A);

        if ((A == 0) || (((B * B) - 4 * (A * C) < 0))) {
            System.out.println("Impossivel calcular");
        } else if (((B * B) - 4 * A * C) == 0) {
            System.out.println("Existe apenas uma raiz real, a de: " + R1);
        } else {

            System.out.println(String.format("R1 = %.5f", R1));
            System.out.println(String.format("R2 = %.5f", R2));
        }
    }

}