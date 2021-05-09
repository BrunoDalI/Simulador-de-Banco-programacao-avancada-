

#include "../Bibliotecas/Conta.h"



// MÉTODOS GERAIS:
// deposita(valor: float): void
void Conta::deposita(float valor){
    //cout << "  Deposito de " << valor << "R$ efetuado.";
    _saldo += int(valor);
}


// retira(valor: float): void
void Conta::retira(float valor){
    //cout << "  Retirada de " << valor << "R$ realizada.";
    _saldo -= int(valor);
}


// transfere(ContaDestino: Conta): void
void Conta::transfere(Conta *Destino, float valorTrasnf) {
    Destino->deposita(valorTrasnf);
    retira(valorTrasnf);
    cout << endl << " > Tranferencia de: " << valorTrasnf << "R$ realizada!!" << endl;
}


// extrato(): void



//aplicaJurosDiario(dias: int): void

