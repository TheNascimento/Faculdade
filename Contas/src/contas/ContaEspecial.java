/*
 * Atributo: limite (indica o quanto a conta pode ficar negativa)
 * Métodos: sacar (permite saldo negativo até o valor limite), novos getters e
 * setters.
 *
 * Data: 28/04/2019
 */
package contas;

/**
 *
 * @author Tiago Nascimento
 */
public class ContaEspecial extends ContaBancaria {
    private double limite;

    public double getLimite() {
        return limite;
    }

    public void setLimite(double limite) {
        this.limite = limite;
        this.setSaldo(this.getSaldo() + limite);
    }
    
    public void sacar(double valor) {
        // Essa foi a melhor forma de se implementar o limite. Não achei solução melhor.
        if(valor <= this.getSaldo()) {
            this.setSaldo(this.getSaldo() - valor);
            System.out.println("Saque de R$" + valor + "realizado com sucesso!");
        } else {
                System.out.println("O saque excede o limite da conta especial!");
            }
        }
    }

