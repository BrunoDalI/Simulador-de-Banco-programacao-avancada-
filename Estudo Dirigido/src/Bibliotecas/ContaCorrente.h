
// 5. Altere os construtores das classes ContaCorrente e ContaPoupanca para
//    imprimir a seguinte mensagem: "Criando	 conta	 {numero}	 do	 cliente
//    {cliente}" , onde {numero} � o n�mero da conta e {cliente} � o nome do cliente da conta.

// OBS: Como o _numero da classe CONTA � privado, tive que fazer essa modifica��o do ex 5 pelo construtor da classe conta
// linha 30;

#ifndef CONTACORRENTE_H_INCLUDED
#define CONTACORRENTE_H_INCLUDED

// ContaCorrente
// extrato(): void
// aplicaJurosDiarios(dias: int): void
// Conta <----- ContaCorrente


// Conta <----- ContaCorrente
#include "Conta.h"
class ContaCorrente : public Conta{
public:
    // CONSTRUTOR:
    ContaCorrente(int numero, Cliente* nomeCliente) : Conta(numero, nomeCliente) { }


    // M�TODOS GERAIS:
    // extrato(): void
    void extrato() {
        cout << endl;
        //cout << "Criando conta " << _numero << " do cliente " << _nomeCliente->getNome() << endl;
        cout << "  " << setfill('_') << setw(46) << " " << endl;
        cout << " |" << setfill(' ') << setw(3) << "  Extrato - Conta Corrente" << setfill(' ') << setw(20) << "|" << endl;
        cout << " |" << setfill('_') << setw(46) << "|" << endl;
        Conta::extrato();
        cout << " |" << setfill('_') << setw(46) << "|" << endl;
    };

    // aplicaJurosDiarios(dias: int): void
    void aplicaJurosDiarios(int dias) {
        cout << " | > Aplicacao do juros sobre a Conta Corrente" << endl;
        // Uma conta Corrente aplica juros de 0,01% ao dia
        float juros = getSaldo();
        juros *= ((0.01/100) * dias);
        cout << " | Juros: " << juros << endl;
        cout << " | Saldo: " << (getSaldo() + juros) << endl;
        cout << " |" << setfill('_') << setw(46) << "|";
        cout << endl;
    }


private:

};

#endif // CONTACORRENTE_H_INCLUDED
