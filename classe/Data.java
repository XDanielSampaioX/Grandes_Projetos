package classe;

public class Data {

	int dia;
	int mes;
	int ano;
	String formato= "%d/%d/%d";

	Data() {
//		dia = 01;
//		mes = 01;
//		ano = 1970;
		this(01, 01, 1970);
		
		// Valores padrao:
		// byte, short, int, long -> 0
		// float, double -> 0.0
		// boolean -> false
		// char -> '\u0000'
		// objetos (String) -> NULL
	}

	Data(int dia, int mes, int ano) {
		this.dia = dia; // THIS: instancia (mesmo endereço) um varivel fora do construtor. Ex: this.dia;
						// ele linka a instancia acima fora do contrutor.
		this.mes = mes;
		this.ano = ano;
	}

	String obterDataformatada() {
		return String.format(formato, this.dia, this.mes, this.ano);
	}

	void imprimirDataFormata() {
		System.out.println(this.obterDataformatada());
	}
}
