/*
 * Projeto para implementação da primeira API de Programação Orientada a Objetos
 * Data: 18/04/2019
 */
package primeiraapi;

import java.util.Scanner;

/**
 *
 * @author Tiago Nascimento e Elian Victor
 */
public class PrimeiraAPI {

    /*
     * Classe principal na qual os três exercícios serão executados.
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int escolha, validacao;
        System.out.println("\t\t\t\t-------- Primeira API de POO 2019 --------");
        
        // O programa pode ser repetido infinitamente
        do{
            System.out.println("\nEscolha qual exercício quer testar (1) para o "
                    + "Calculo de média, (2) para a Conversão de medidas de "
                    + "temperatura e \n(3) para o Cálculo de triângulo:");
            escolha = scanner.nextInt();
            System.out.println("");

            switch(escolha){
                case 1:
                    PrimeiroExercicio teste1 = new PrimeiroExercicio();
                    
                    teste1.obterNotas();
                    teste1.calcularMedia();
                    break;
                case 2:
                    SegundoExercicio teste2 = new SegundoExercicio();
                    
                    teste2.obterValor();
                    teste2.calcularTemperatura();
                    break;
                case 3:
                    TerceiroExercicio teste3 = new TerceiroExercicio();
                    
                    validacao = teste3.verificarTriangulo();
                    
                    /* Se o triângulo for inválido, a classificação e cálculo de
                     * área não serão executados.
                     */     
                    if(validacao == 0){
                        teste3.classificarTriangulo();
                        teste3.calcularArea();
                    }
                    System.out.println("----------------------------------------"
                            + "------------------------");
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
   
