#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED


#include <iostream>
#include <iomanip> // Para o setfill();

using namespace std;

class Menu{
public:

    /*
    void imprimeExtrato(Conta* c){
        c->extrato();
    }
    */

    int menu(int r){
        do{
            cout << endl << endl;
            cout << setfill(' ') << setw(31) << " " << " ________ Banco Prog __________      " << endl;
            cout << setfill(' ') << setw(31) << " " << "|                              |     " << endl;
            cout << setfill(' ') << setw(31) << " " << "| [2] --> OP 2                 |     " << endl;
            cout << setfill(' ') << setw(31) << " " << "| [3] --> OP 3                 |     " << endl;
            cout << setfill(' ') << setw(31) << " " << "| [4] --> OP 4                 |     " << endl;
            cout << setfill(' ') << setw(31) << " " << "| [5] --> OP 5                 |     " << endl;
            cout << setfill(' ') << setw(31) << " " << "| [6] --> OP 6                 |     " << endl;
            cout << setfill(' ') << setw(31) << " " << "| [7] --> OP 7                 |     " << endl;
            cout << setfill(' ') << setw(31) << " " << "| [1] --> OP Todas             |     " << endl;
            cout << setfill(' ') << setw(31) << " " << "|                              |     " << endl;
            cout << setfill(' ') << setw(31) << " " << "| [0] --> Sair                 |     " << endl;
            cout << setfill(' ') << setw(31) << " " << "|______________________________|     " << endl;
            cout << setfill(' ') << setw(32) << " " << "Digite a OP desejada:";
            //fflush(stdin);
            cin >> r;

        }while(r != 0 && r != 1 && r != 2 && r != 3 && r != 4 && r != 5 && r != 6);
        return r;
    }
};


#endif // MENU_H_INCLUDED
