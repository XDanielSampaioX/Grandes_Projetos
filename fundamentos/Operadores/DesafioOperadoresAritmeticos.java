package fundamentos.Operadores;

public class DesafioOperadoresAritmeticos {

	public static void main(String[] args) {
		
		int a = 6*(3+2);
		var b = Math.pow(a, 2);
		double c = b/(3*2);
		int d = 1-5;
		int e = 2-7;
		int f = d*e;
		double g = f/2;
		var h = Math.pow(g, 2);
		var i = c-h;
		var j = Math.pow(i, 3);
		var k = Math.pow(10, 3);
		var m = j/k;
		
		System.out.println("O resultado da\n"
				+ "expressão ((6*(3+2))²/3*2)\n -"
				+ "(((1-5)*(2-7)/2)²)³/10³ é:");
		System.out.println(m);
		
		
	}
}
