package fundamentos.Exercicios;

public class EquacaoSegundoGrau {

	public static void main(String[] args) {

		final double a = 1;
		final double b = 12;
		final double c = -13;

		System.out.println("b²-4.a.c");
		double b1 = Math.pow(b, 2);

		double delta = b1 - 4 * a * c;
		System.out.println("Delta= " + delta);

		System.out.println("Primeiro X= -b+√∆/2*a");
		System.out.println("Segundo X= -b-√∆/2*a");

		double raizDelta = Math.sqrt(delta);

		double x1 = (-b + raizDelta) / 2 * a;
		System.out.printf("Resultado Primeiro X= %.2f", x1);

		double x2 = (-b - raizDelta) / 2 * a;
		System.out.printf("\nResultado Segundo X= %.2f", x2);

	}
}
