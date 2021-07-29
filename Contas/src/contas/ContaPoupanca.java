/*
 * Atributo: dia de rendimento;
 * Métodos: atualiza, recebe recebe a taxa de rendimento da poupança e atualiza 
 * saldo, novos getters e setters.
 *
 * Data: 28/04/2019
 */
package contas;

/**
 *
 * @author Tiago Nascimento
 */
public class ContaPoupanca extends ContaBancaria {
    private int diaDeRendimento;

    public int getDiaDeRendimento() {
        return diaDeRendimento;
    }

    public void setDiaDeRendimento(int diaDeRendimento) {
        if(diaDeRendimento > 0 && diaDeRendimento <= 31) {
            this.diaDeRendimento = diaDeRendimento;
        } else {
            System.out.println("Valor inválido!");
        }    
    }
    
    public void atualiza(double rendimento) {
        this.setSaldo(this.getSaldo() + (this.getSaldo() * rendimento));
    }
        
}
