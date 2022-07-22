package colecoes;

import java.util.HashSet;
import java.util.Set;
import java.util.SortedSet;
import java.util.TreeSet;

public class ConjuntoComportado {

	public static void main(String[] args) {

		//Set<String> listaAprovados = new HashSet<String>(); // Não ordenado
		SortedSet<String> listaAprovados = new TreeSet<String>(); // Ordenado
		listaAprovados.add("Ana");
		listaAprovados.add("Carlos");
		listaAprovados.add("Luca");
		listaAprovados.add("Pedro");

		for (String candidato : listaAprovados) {
			System.out.println(candidato);
		}
			
			Set<Integer> nums = new HashSet<>();
			nums.add(1);
			nums.add(2);
			nums.add(3);
			nums.add(4);
			
		for (int n: nums) {
			System.out.println(n);
		}
	}
}
