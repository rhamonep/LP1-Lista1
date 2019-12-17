#include <iostream>
#include <string>
#include "Voo.h"
#include "Horario.h"
#include "Data.h"

using namespace std;

int main(){

    Data data1 = Data(1, 1, 2020);
    Horario horario1 = Horario(10, 30, 0);
    Voo voo1 = Voo(1, data1, horario1);

    cout << "Voo 1: " << endl;
    cout << endl;
    cout << "Data: " << voo1.getData().getDia() << "/" << voo1.getData().getMes() << "/" << voo1.getData().getAno() << endl;
    cout << "Horario: " << voo1.getHorario().toString() << endl;
    cout << "Total de Vagas Disponíveis: " << voo1.vagas() << endl;
    cout << "Próxima Cadeira Livre: " << voo1.proximoLivre() << endl;
    cout << endl;

    for(int i = 0; i < 100; i+=2){
       voo1.ocupa(i); 
    }

    cout << "Cadeiras PARES foram OCUPADAS!" << endl;
    cout << endl;

    cout << "Total de Vagas Disponíveis: " << voo1.vagas() << endl;
    cout << endl;
    cout << "Próxima Cadeira Livre: " << voo1.proximoLivre() << endl;
    cout << endl;

    if(voo1.verifica(1)){
        cout << "Cadeira 1 OCUPADA!" << endl;
        cout << endl;
    }else{
        cout << "Cadeira 1 LIVRE!" << endl;
        cout << endl;
    }

    voo1.ocupa(1);
    cout << "Cadeira 1 foi OCUPADA! " << endl;
    cout << endl;

    cout << "Total de Vagas Disponíveis: " << voo1.vagas() << endl;
    cout << endl;
    cout << "Próxima Cadeira Livre: " << voo1.proximoLivre() << endl;
    cout << endl;


    return 0;
}