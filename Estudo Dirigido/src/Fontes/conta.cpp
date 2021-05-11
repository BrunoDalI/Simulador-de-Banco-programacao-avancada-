

#include "../Bibliotecas/Conta.h"



// MÉTODOS GERAIS:
// Realiza o deposito de uma quantia na conta;
void Conta::deposita(float valor){
    //cout << "  Deposito de " << valor << "R$ efetuado.";
    _saldo += int(valor);
}


// Realiza uma retira de uma quantia da conta;
void Conta::retira(float valor){
    //cout << "  Retirada de " << valor << "R$ realizada.";
    _saldo -= int(valor);
}


// Tranfere um valor da conta A para a conta B
void Conta::transfere(Conta *Destino, float valorTrasnf) {
    Destino->deposita(valorTrasnf);
    retira(valorTrasnf);
    cout << endl << " > Tranferencia de: " << valorTrasnf << "R$ realizada!!" << endl;
}


// extrato(): void



//aplicaJurosDiario(dias: int): void

