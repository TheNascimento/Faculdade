/*
 * Classe para o terceiro exercício:
 * 
 * 3) Crie uma classe Triângulo com os seguintes métodos:
 * a) Verificar triângulo: verifica se um triângulo é válido. O valor de 
 * qualquer um dos lados deve ser menor do que a soma dos outros dois.
 * b) Classificar um triângulo:​ retorna o tipo do triângulo considerando as 
 * seguintes regras:
 * ➔ Triângulo equilátero: possui os três lados com medidas iguais.
 * ➔ Triângulo isósceles: possui dois lados com medidas iguais.
 * ➔ Triângulo escaleno: possui os três lados com medidas diferentes.
 * c) Calcular área:​ calcula a área do triângulo de acordo com o tipo de 
 * triângulo.
 */
package primeiraapi;

import java.util.Scanner;

/**
 *
 * @author Tiago Nascimento e Elian Victor
 */
public class TerceiroExercicio {
   private double ladoA, ladoB, ladoC, area, base;
    Scanner scanner = new Scanner(System.in);
    private int tipoTriangulo;
    
    public int verificarTriangulo() {
        System.out.println("----- Verificação de triângulo -----\n");
        
        System.out.println("Digite lado A:");
        ladoA= scanner.nextDouble();    
        System.out.println("Digite lado B:");
        ladoB= scanner.nextDouble(); 
        System.out.println("Digite lado C:");
        ladoC= scanner.nextDouble(); 
       
       if(ladoA > (ladoB + ladoC)){
           System.out.println("\nTriângulo inválido!");
       } else if(ladoB > (ladoC + ladoA)){
           System.out.println("\nTriângulo inválido!");
       } else if (ladoC > (ladoB + ladoA)){
           System.out.println("\nTriângulo inválido!");
       } else {
           System.out.println("\nTriâgulo válido!");
           return 0;
       }
       
       return 1;
       // Um valor precisa ser retornado para realizar a verificação no Main()
    }
    
    public void classificarTriangulo() {
        // Classificações vide enunciado!
        if (ladoA == ladoB && ladoB == ladoC){
            System.out.println("triângulo equilátero!");
            tipoTriangulo = 1;
        }else if (ladoA == ladoB && ladoC != ladoA){
            System.out.println("Triângulo isósceles!");
            tipoTriangulo = 2;
            base = ladoC;
        }
        else if (ladoB == ladoC && ladoA != ladoB){
            System.out.println("Triângulo isósceles!");
            tipoTriangulo = 2;
            base = ladoA;
        }
        else if (ladoC == ladoA && ladoC != ladoB){
            System.out.println("Triângulo isósceles!");
            tipoTriangulo = 2;
            base = ladoB;
        }
        else {
            System.out.println("triâgulo escaleno!");
            tipoTriangulo = 3;
        }
    }
    
    public void calcularArea() {
        // As áreas são calculadas, baseadas na classificação do triângulo.
        switch(tipoTriangulo) {
            case 1:
                area = (Math.pow(ladoA, 2) / 4) * Math.sqrt(3);
                break;
            case 2:
                if(base == ladoC){
                    area = Math.sqrt(Math.pow(ladoA, 2) - Math.pow(ladoC / 2, 2));
                } else if(base == ladoA) {
                    area = Math.sqrt(Math.pow(ladoB, 2) - Math.pow(ladoA / 2, 2));
                } else {
                    area = Math.sqrt(Math.pow(ladoC, 2) - Math.pow(ladoB / 2, 2));
                }
                break;
                
            case 3:
                double calculo = ((ladoA + ladoB + ladoC) / 2);
                area = Math.sqrt(calculo * (calculo - ladoA) * (calculo - ladoB)
                        * (calculo - ladoC));
                break;
        }
        
        System.out.println("A área desse triângulo é: " + area);
    }
}
