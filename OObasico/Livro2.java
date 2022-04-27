public class Livro2 {

    String nome;
    String descricao;
    double valor;
    String isbn;

    void mostrarDetalhes() {
        System.out.println("\n-------------------\nMostrando detalhes do livro\n");
        System.out.println("nome: " + nome);
        System.out.println("descricao: " + descricao);
        System.out.println("valor: " + valor);
        System.out.println("ISBN: " + isbn);
        System.out.println("\n-------------------\n");
    }
}