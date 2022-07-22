package fundamentos.Operadores;

public class Ternario {

	public static void main(String[] args) {
		
		double media = 3.6;		
		String resultadoFinal = media >= 7.0 ? "aprovado" : media >= 5.0 ? "Em recuperacao": "reprovado";
		
		System.out.println("O aluno está " + resultadoFinal);
		
		double nota = 9.9;
		boolean bomComportamento = false;
		boolean passouPorMedia = nota>=7;
		boolean temDesconto = bomComportamento && passouPorMedia;
		String resultado= temDesconto ? "Sim" : "Não";
		
		System.out.printf("Tem desconto ?\n%s", resultado);
	}
}
