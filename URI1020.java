import java.util.Scanner;

public class URI1020 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int numero = leitor.nextInt();

        System.out.printf("\n %d ano (s)", numero / 365);
        System.out.printf("\n %d mes (es)", (numero % 365) / 30);
        System.out.printf("\n %d dia (s)", (numero % 365) % 30);
    }
}