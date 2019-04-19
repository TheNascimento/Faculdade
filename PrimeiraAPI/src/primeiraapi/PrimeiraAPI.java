/*
 * Projeto para implementação da primeira API de Programação Orientada a Objetos
 * Data: 18/04/2019
 */
package primeiraapi;

import java.util.Scanner;

/**
 *
 * @author Tiago Nascimento
 */
public class PrimeiraAPI {

    /*
     * Classe principal na qual os três exercícios serão executados.
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int escolha;
        System.out.println("\t\t\t\t-------- Primeira API de POO 2019 --------");
        
        do{
            System.out.println("\nEscolha qual exercício quer testar (1) para o "
                    + "primeiro, (2) para o segundo e (3) para o terceiro:");
            escolha = scanner.nextInt();
            System.out.println("");

            switch(escolha){
                case 1:
                    PrimeiroExercicio teste = new PrimeiroExercicio();
                    teste.obterNotas();
                    teste.calcularMedia();
                    break;
                case 2:
                    System.out.println("---------Em construção! --------");
                    break;
                case 3:
                    System.out.println("---------Em construção! --------");
                    break;
                default:
                    System.out.println("Opção inválida!");
                    break;
            }
            
            System.out.println("\nDeseja repetir o programa? (1) para Sim "
                    + "qualquer outro valor para não:");
            escolha = scanner.nextInt();
        }while(escolha == 1);
    }
}
   
