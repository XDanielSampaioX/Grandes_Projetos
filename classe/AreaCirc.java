package classe;

public class AreaCirc {

	double raio;
	final static double PI= 3.14; // Static engloba toda a varivel a somente uma variavel do sistema;
	
	AreaCirc (double raioInicial){
		raio= raioInicial;
	}
	double area() {
		return PI* Math.pow(raio, 2);
	}
}
