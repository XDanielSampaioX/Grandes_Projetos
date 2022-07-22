package classe.desafio;

public class DesafioModuloJantar {

	public static void main(String[] args) {
		
		DesafioModuloComida c1= new DesafioModuloComida ("Arroz", 0.223);
		DesafioModuloComida c2= new DesafioModuloComida ("Feijão", 0.300);
		
		DesafioModuloPessoa p= new DesafioModuloPessoa ("João", 99.8);
		
		System.out.println(p.apresentar ());
		p.comer (c1);
		
		System.out.println(p.apresentar ());
		p.comer (c2);
		
		System.out.println(p.apresentar ());
	}
}
