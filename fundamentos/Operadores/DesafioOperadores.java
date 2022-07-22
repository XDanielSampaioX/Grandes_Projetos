package fundamentos.Operadores;

public class DesafioOperadores {

	public static void main(String[] args) {
		
		boolean trabalho1 = true;
		boolean trabalho2 = true;
	    boolean resultado1 = trabalho1 && trabalho2;
	    boolean resultado2 = trabalho1 ^ trabalho2;
	    boolean sorvete = trabalho1 || trabalho2;
	    boolean MaisSaudavel = !sorvete;
		
		System.out.println("Comprar TV de 50\"? " + resultado1);
		System.out.println("Comprar TV de 32\"? " + resultado2);
		System.out.println("Tomaremos sorvete\"? " + sorvete);
		System.out.println("Mais saudável? " + MaisSaudavel);
	}
}
