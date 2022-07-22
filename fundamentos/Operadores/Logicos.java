package fundamentos.Operadores;

public class Logicos {

	public static void main(String[] args) {
		
		boolean condicao1 = true;
		boolean condicao2 = 3 > 7;
		
		System.out.println(condicao1 && condicao2); // E
		System.out.println(condicao1 || condicao2); // OU
		System.out.println(condicao1 ^ condicao2); // XOR
		System.out.println(!condicao1); // not
		
		System.out.println("Tabela verdade E (AND)");
		System.out.println(true && true);
		System.out.println(true && false);

		System.out.println("\nTabela verdade OU (OR)");
		System.out.println(false || true);
		System.out.println(false || false);

		System.out.println("\nTabela verdade OU EXCLUSIVO (XOR)");
		System.out.println(true ^ true);
		System.out.println(true ^ false);
		System.out.println(false ^ true);
		System.out.println(false ^ false);
	}
}
