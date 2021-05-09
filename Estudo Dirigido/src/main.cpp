

#include "Bibliotecas/Banco.h"


int main(){


    Banco banco = Banco();
    banco.inicio();


    /**
     EX -> 6
    > R: Sim eh um problema pois ao cria um vetor o compilador
        cria 100 objetos, porem o construtor tem como entrada 2 paramentros e nao consegue cria os objetos.
     A solcao foi retirada das aulas 04, 06, e 05 - Matrizes de objetos, onde cria-se um vetor
        de ponteiros para aloca-los dinamicamente todos esses objetos.

     > Solucao:
       ContaCorrente** conta_corrente = (new ContaCorrente*[100]);
       delete[] conta_corrente;
    **/



    /**
    EX -> 7
    > R: O probelma eh que o objeto 'Conta' não aceita ponteiros do tipo 'ContaCorrente',
        pois a classe 'Conta' eh pai da classe 'ContaCorrente'.
    Uma solução encontrada na internet, foi converter os ponteiro do tipo ContaCorrente para o tipo Conta

    > Solucao:
      Conta** conta = ((Conta**) new ContaCorrente*[100]);
      delete[] conta;
    **/

    return 0;
}


