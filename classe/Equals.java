package classe;

//import java.util.Date;

public class Equals {

	public static void main(String[] args) {
		
		Usuario u1= new Usuario ();
		u1.nome= "Daniel Sampaio";
		u1.email= "danielsampaio127@gmail.com";

		Usuario u2= new Usuario ();
		u2.nome= "Daniel Sampaio";
		u2.email= "danielsampaio127@gmail.com";
		
		System.out.println(u1== u2);
		System.out.println(u1.equals(u2)); // Mesmo resultado que == pois ainda não foi definido equals;
		System.out.println(u2.equals(u1));
		
		//System.out.println(u2.equals(new Date()));
	}
}
