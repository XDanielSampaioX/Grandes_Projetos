package colecoes;

import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;

public class Mapa {

	public static void main(String[] args) {
		
		Map<Integer, String> usuarios= new HashMap<>();
		
		usuarios.put(1, "Roberto"); // Put: Inclue no Map
		usuarios.put(2, "Ricardo");
		usuarios.put(3, "Rafaela");
		usuarios.put(4, "Rebeca");
		
		System.out.println(usuarios.size()); // Tamanho
		System.out.println(usuarios.isEmpty()); // Se está vazio
		
		System.out.println(usuarios.keySet()); // Retorna o mapeamento
		System.out.println(usuarios.values()); // Retorna os valores
		System.out.println(usuarios.entrySet()); // Retorna os o mapeamento e os valores associados
		
		System.out.println(usuarios.containsKey(2));
		System.out.println(usuarios.containsValue("Rebeca"));
		
		System.out.println(usuarios.get(4)); // Retorna o valor que está mapeado
		System.out.println(usuarios.remove(1)); // Remove informando o valor mapaeado
		System.out.println(usuarios.remove(2, "Ricardo")); // Remove fornecendo os dois parametros
		
		for (int chave: usuarios.keySet()) { // For each mostrando o mapeamento
			System.out.println(chave);
		}
		
		for (String valor: usuarios.values()) { // For each mostrando valores
			System.out.println(valor);
		}
		
		for (Entry<Integer, String> registro: usuarios.entrySet()) { // Entry: Recebe tipos Map para poder percorrer todos ao mesmo tempo
			System.out.print( registro.getKey() + "==> ");
			System.out.println( registro.getValue());
		}
	}
}
