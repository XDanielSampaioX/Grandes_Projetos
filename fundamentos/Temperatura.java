package fundamentos;

public class Temperatura {

	public static void main(String[] args) {
		
		final int AJUSTE = 32;
		final double FATOR = 5/9.0;
		double fahrenheit = 86;
		double celsius = (fahrenheit - AJUSTE) * FATOR;
		
		System.out.println("O resultado é " + celsius + "ºC.");

		fahrenheit = 150;
		celsius = (fahrenheit - AJUSTE) * FATOR;
		
		System.out.println("O resultado é " + celsius + "ºC.");
		
	}
}
