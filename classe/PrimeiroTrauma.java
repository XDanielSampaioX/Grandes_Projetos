package classe;

public class PrimeiroTrauma {

	int a= 3; // não pode mexer aqui
	static int b= 4;
	
	public static void main(String[] args) {
		
		PrimeiroTrauma p= new PrimeiroTrauma(); // Pra poder acessar o valor fora do main, é preciso criar um contrutor do tipo da classe
		System.out.println(p.a);
		
		System.out.println(b); // um valor statico pode acessar um valor statico mesmo estando fora do main;.
	}
}
