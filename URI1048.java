import java.util.Scanner;
import java.text.DecimalFormat;

public class URI1048 {
    public static void main(String[] args) {

        double salarioAumentado, reajusteGanho, salario, porcentagem;

        DecimalFormat decimalf = new DecimalFormat("0.00");
        DecimalFormat porcen = new DecimalFormat("0");

        Scanner leitor = new Scanner(System.in);
        salario = leitor.nextDouble();

        if (salario > 0 && salario <= 400.00) {
            salarioAumentado = salario * 1.15;
            reajusteGanho = salarioAumentado - salario;
            porcentagem = 15;

        } else if (salario >= 400.01 && salario <= 800.00) {
            salarioAumentado = salario * 1.12;
            reajusteGanho = salarioAumentado - salario;
            porcentagem = 12;

        } else if (salario >= 800.01 && salario <= 1200.00) {
            salarioAumentado = salario * 1.10;
            reajusteGanho = salarioAumentado - salario;
            porcentagem = 10;

        } else if (salario >= 1200.01 && salario <= 2000.00) {
            salarioAumentado = salario * 1.07;
            reajusteGanho = salarioAumentado - salario;
            porcentagem = 7;

        } else {
            salarioAumentado = salario * 1.04;
            reajusteGanho = salarioAumentado - salario;
            porcentagem = 4;

        }
        System.out.println("Novo salario: " + decimalf.format(salarioAumentado));
        System.out.println("Reajuste ganho: " + decimalf.format(reajusteGanho));
        System.out.println("Em percentual: " + porcen.format(porcentagem) + "%");
    }
}