package primeiroexercicio;

import java.util.Scanner;

/**
 *
 * @author Tiago Nascimento
 */
public class PrimeiroExercicio {
    public static void main(String[] args) {
        System.out.println("---------------------------------------------------------------------------------------------------------------");
        System.out.println("\t\t\t\t\tCálculo de Raiz Quadrada de Número Positivo\n");
        
        Teste teste1 = new Teste();
        Scanner scanner = new Scanner(System.in);
        String repetir;
        
        do{
            teste1.calcularRaiz();
        
            System.out.println("Deseja repetir o programa (S para sim, N para "
                    + "não)?:");
            repetir = scanner.next();
            repetir = repetir.toUpperCase();
            System.out.println("");
            
        }while (repetir.equals("S"));
        System.out.println("---------------------------------------------------------------------------------------------------------------");
    }
    
}
