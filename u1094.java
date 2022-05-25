import java.text.DecimalFormat;
import java.util.Scanner;

public class u1094 {
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int vezes, nuanimal, contadorCoelho = 0, contadorRato = 0, contadorSapo = 0;
        String animal;

        DecimalFormat porcen = new DecimalFormat("0.00");
        vezes = ler.nextInt();
        for (int i = 0; i < vezes; i++) {
            nuanimal = ler.nextInt();
            animal = ler.next();

            if (animal.equalsIgnoreCase("c")) {

                contadorCoelho = contadorCoelho + nuanimal;
            } else if (animal.equalsIgnoreCase("r")) {

                contadorRato = contadorRato + nuanimal;
            } else if (animal.equalsIgnoreCase("s")) {

                contadorSapo = contadorSapo + nuanimal;
            }
        }
        int total = contadorCoelho + contadorRato + contadorSapo;
        double percentualC = (contadorCoelho * 100.0) / total;
        double percentualR = (contadorRato * 100.0) / total;
        double percentualS = (contadorSapo * 100.0) / total;

        System.out.println("Total: " + total + " cobaias");
        System.out.println("Total de coelhos: " + contadorCoelho);
        System.out.println("Total de ratos: " + contadorRato);
        System.out.println("Total de sapos: " + contadorSapo);
        System.out.println("Percentual de coelhos: " + porcen.format(percentualC) + " %");
        System.out.println("Percentual de ratos: " + porcen.format(percentualR) + " %");
        System.out.println("Percentual de sapos: " + porcen.format(percentualS) + " %");
    }
}