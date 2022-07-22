package classe.desafio;

public class DesafioModuloPessoa {

	String nome;
	double peso;
	
	DesafioModuloPessoa (String nome, double peso){
		this.nome= nome;
		this.peso= peso;
	}
	void comer (DesafioModuloComida DesafioModuloComida) {
		if (DesafioModuloComida!= null) {
			this.peso+= DesafioModuloComida.peso;
		}
	}
	String apresentar () {
		return "Olá eu sou o " + nome + " e tenho " + peso + " kgs.";
	}
}
