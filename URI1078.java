import java.util.Scanner;
import java.text.DecimalFormat;

public class URI1078 {
    public static void main(String[] args) {

        int numero, r;
        Scanner leitor = new Scanner(System.in);
        numero = leitor.nextInt();

        for (int i = 1; i <= 10; i++) {
            r = numero * i;
            System.out.println(i + " x " + numero + " = " + r);
        }
    }
}