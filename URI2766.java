
import java.util.Scanner;

public class URI2766 {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        String facas;
        String aux = "a", aux2 = "b", aux3 = "c";

        for (int i = 0; i < 10; i++) {
            facas = ler.nextLine();

            if (i == 2) {
                aux = facas;
            } else if (i == 6) {
                aux2 = facas;

            } else if (i == 8) {
                aux3 = facas;
            }
        }

        System.out.println(aux);
        System.out.println(aux2);
        System.out.println(aux3);

    }
}
