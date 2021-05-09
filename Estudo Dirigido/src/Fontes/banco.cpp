
#include "../Bibliotecas/Banco.h"
#include "../Bibliotecas/ContaCorrente.h"
#include "../Bibliotecas/ContaPoupanca.h"
#include "../Bibliotecas/Conta.h"




void Banco::inicio(){
    _resposta = _op.menu(_resposta);

    system("cls");
    switch(_resposta){
        case 0:{
            cout << "---> Ateh logo !!" << endl;
         } break;
        case 2:{
            OP2();
         } break;
        case 3:{
            OP3();
         } break;
        case 4:{
            OP4();
         } break;
        case 5:{
            OP5();
         } break;
        case 6:{
            OP6();
         } break;
        case 7:{
            OP7();
         } break;
        case 1:{
            cout << endl;
            OP2();
            cout << endl;
            OP3();
            cout << endl;
            OP4();
            cout << endl;
            OP5();
            cout << endl;
            OP6();
            cout << endl;
            OP7();
         } break;
    }
}

void Banco::OP2() const{
    cout << endl;
    cout << " -> 2. Sobrescreva o metodo aplicaJurosDiarios nas classes ContaCorrente e ContaPoupanca." << endl;
    cout << setfill(' ') << setw(4) << " " << " Uma conta corrente aplica juros de 0,01% ao dia," << endl;
    cout << setfill(' ') << setw(4) << " " << " enquanto uma conta poupança aplica juros de 0,08% ao dia." << endl;
    cout << endl << setfill(' ') << setw(3) << " " << "  Solucao:" << endl;
    cout << endl << setfill(' ') << setw(3) << " " << " // Arquivo: ContaCorrente.h" << endl;
    cout << setfill(' ') << setw(4) << " " << " void aplicaJurosDiarios(int dias) {" << endl;
    cout << setfill(' ') << setw(6) << " " << " float juros = getSaldo();" << endl;
    cout << setfill(' ') << setw(6) << " " << " juros *= ((0.01/100) * dias);" << endl;
    cout << setfill(' ') << setw(4) << " " << " }" << endl;

    cout << endl << endl << setfill(' ') << setw(3) << " " << " // Arquivo: ContaPoupanca.h" << endl;
    cout << setfill(' ') << setw(4) << " " << " void aplicaJurosDiarios(int dias) {" << endl;
    cout << setfill(' ') << setw(6) << " " << " float juros = getSaldo();" << endl;
    cout << setfill(' ') << setw(6) << " " << " juros *= ((0.08/100) * dias);" << endl;
    cout << setfill(' ') << setw(4) << " " << " }" << endl;
}


void Banco::OP3(){
    cout << endl;
    cout << " -> 3. Escreva um programa que crie 2 contas corrente e 2 contas poupanca." << endl;
    cout << setfill(' ') << setw(4) << " " << " - Realize uma serie de 4 operacoes de deposito e retirada, e imprima seus extratos."<< endl;


    // 1° Conta Corrente
    ContaCorrente contaC1(1, new Cliente("Bruno"));
    // 4 Operacoes
    contaC1.deposita(1000);
    contaC1.retira(500);
    contaC1.extrato();
    contaC1.aplicaJurosDiarios(10);

    // 2° Conta Corrente
    ContaCorrente contaC2(2, new Cliente("Alice"));
    // 4 Operacoes
    contaC2.deposita(2000);
    contaC2.retira(50);
    contaC2.extrato();
    contaC2.aplicaJurosDiarios(20);


    cout << endl << endl;
    // 1° Conta Poupanca
    ContaPoupanca contaP1(1, new Cliente("Danilo"));
    // 4 Operacoes
    contaP1.deposita(3000);
    contaP1.retira(2000);
    contaP1.extrato();
    contaP1.aplicaJurosDiarios(30);

    // 2° Conta Poupanca
    ContaPoupanca contaP2(2, new Cliente("Maite"));
    // 4 Operacoes
    contaP2.deposita(4000);
    contaP2.retira(3050);
    contaP2.extrato();
    contaP2.aplicaJurosDiarios(40);
}


void Banco::OP4(){
    cout << endl;
    cout << " -> 4. Realize uma transferencia de R$ 1000,00 de uma conta poupanca para uma conta corrente. " << endl;
    cout << setfill(' ') << setw(4) << " " << " - Aplique juros de 100 dias em uma conta corrente e uma conta poupanca que possuam o mesmo saldo." << endl;
    cout << setfill(' ') << setw(4) << " " << " - Imprima os extratos das duas contas." << endl;

    ContaCorrente CCex1(5, new Cliente("ContaCorrente exemplo1"));
    CCex1.deposita(1000);
    ContaPoupanca CPex2(6, new Cliente("ContaPoupanca exemplo2"));
    CPex2.deposita(1000);
    // Mostra extrato antes da tranferencia;
    CCex1.extrato();
    CPex2.extrato();

    // Realize uma transferencia de R$ 1000,00 de uma conta poupança para uma conta corrente.
    CCex1.transfere(&CPex2,1000);

    // Imprime apenas para ver as transferencias
    CCex1.extrato();
    CPex2.extrato();
    // Apenas para as duas contas ficarem com saldo igual;
    CPex2.transfere(&CCex1,1000);


    // Imprima os extratos das duas contas.
    // com o juros de 100 dias
    CCex1.extrato();
    CCex1.aplicaJurosDiarios(100);
    CPex2.extrato();
    CPex2.aplicaJurosDiarios(100);
}


void Banco::OP5(){
    cout << endl;
    cout << " -> 5. Altere os construtores das classes ContaCorrente e ContaPoupanca para" << endl;
    cout << setfill(' ') << setw(4) << " " << " imprimir a seguinte mensagem: " "Criando	 conta	 {numero}	 do	 cliente" << endl;
    cout << setfill(' ') << setw(4) << " " << " {cliente}" ", onde {numero} eh o numero da conta e {cliente} eh o nome do cliente da conta." << endl;
    //EX 05
    //                  "Criando conta	    {numero}	 do	cliente             {cliente}"
    cout << setfill(' ') << setw(4) << " " <<  " Criando conta  _numero  do cliente  _nomeCliente->getNome() " << endl;
    cout << setfill(' ') << setw(4) << " " <<  " Solucao encontrada na linha 29 do arquivo Conta.h" << endl;
}

void Banco::OP6(){
    cout << endl;
    cout << " -> 6. Crie um vetor de 100 contas correntes." << endl;
    cout << setfill(' ') << setw(4) << " " << " - Analise o que aconteceu ao criar este vetor. " << endl;
    cout << setfill(' ') << setw(4) << " " << " - Isto e um problema? Se sim, como pode ser resolvido? " << endl;
    cout << setfill(' ') << setw(4) << " " << " - Coloque a resposta como comentario no codigo da funcao main()." << endl;

    cout << endl << setfill(' ') << setw(3) << " " << "  R: Sim eh um problema pois ao cria um vetor o compilador" << endl;
    cout << setfill(' ') << setw(4) << " " << " cria 100 objetos, porem o construtor tem como entrada 2 paramentros e nao consegue cria os objetos." << endl;
    cout << setfill(' ') << setw(4) << " " << " A solucao foi retirada das aulas 04, 06, e 05 - Matrizes de objetos, onde cria-se um vetor" << endl;
    cout << setfill(' ') << setw(4) << " " << " de ponteiros para aloca-los dinamicamente todos esses objetos." << endl;


    cout << endl << setfill(' ') << setw(3) << " " << "  Solucao:" << endl;
    cout << setfill(' ') << setw(4) << " " << " ContaCorrente** conta_corrente = new ContaCorrente*[100];" << endl;
    cout << setfill(' ') << setw(4) << " " << " delete[] conta_corrente;" << endl;

    // Solução retirada da aula -> 04 - "Passagem por referencia"
    ContaCorrente** conta_corrente = (new ContaCorrente*[100]);
    // Destroi o vetor alocado;
    delete[] conta_corrente;
}


void Banco::OP7(){
    cout << endl;
    cout << " -> 7. Crie um vetor com 100 contas." << endl;
    cout << setfill(' ') << setw(4) << " " << " - Qual problema ocorreu?" << endl;
    cout << setfill(' ') << setw(4) << " " << " - Como este problema pode ser solucionado?" << endl;
    cout << setfill(' ') << setw(4) << " " << " - Implemente a correção do problema." << endl;
    cout << setfill(' ') << setw(4) << " " << " - Coloque a resposta como comentário no codigo da funcao main()." << endl;


    cout << endl << setfill(' ') << setw(3) << " " << "  R: O probelma pe que o objeto 'Conta' nao aceita ponteiros do tipo 'ContaCorrente'," << endl;
    cout << setfill(' ') << setw(4) << " " << "  pois a classe 'Conta' eh pai da classe ContaCorrente." << endl;
    cout << setfill(' ') << setw(4) << " " << "  Uma solução encontrada na internet, foi converter os ponteiro " << endl;
    cout << setfill(' ') << setw(4) << " " << "  do tipo ContaCorrente para o tipo Conta" << endl;


    cout << endl << setfill(' ') << setw(3) << " " << "  Solucao:" << endl;
    cout << setfill(' ') << setw(4) << " " << " Conta** conta = (Conta**) new ContaCorrente*[100];" << endl;
    cout << setfill(' ') << setw(4) << " " << " delete[] conta;" << endl;


    Conta** conta = ((Conta**) new ContaCorrente*[100]);
    delete[] conta;
}



