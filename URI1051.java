import java.util.Scanner;
import java.text.DecimalFormat;

public class URI1051 {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        double entrada = ler.nextDouble();
        double resultado;

        DecimalFormat decimalf = new DecimalFormat("0.00");

        if (entrada >= 0 && entrada <= 2000.00) {
            System.out.println("Isento");
        } else if (entrada >= 2000.01 && entrada <= 3000.00) {
            resultado = (entrada - 2000.00) * 0.08;
            System.out.println("R$ " + decimalf.format(resultado));
            // System.out.println("8 %");
        } else if (entrada >= 3000.01 && entrada <= 4500.00) {
            resultado = (entrada - 3000.00) * 0.18 + 1000.00 * 0.08;
            System.out.println("R$ " + decimalf.format(resultado));
            // System.out.println("18 %");
        } else if (entrada >= 4500.00) {
            resultado = (entrada - 4500.00) * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08;
            System.out.println("R$ " + decimalf.format(resultado));
            // System.out.println("28 %");
        }

    }

}