#include <iostream>
#include "Data.h"

using namespace std;

int main() {
    Data data1;
    Data data2 = Data(28, 2, 2021);

    data1.setData(28,2,2020);

    cout << "Data1: " << data1.getDia() << " de " << data1.getMesExtenso() << " de " << data1.getAno() << endl;
    cout << endl;

    cout << "Data2: " << data2.getDia() << " de " << data2.getMesExtenso() << " de " << data2.getAno() << endl;
    cout << endl;

    if(data1.compara(data2) > 0){
        cout << "Data 1 DEPOIS de Data 2" << endl;
    }else if(data1.compara(data2) == 0){
        cout << "Datas IGUAIS" << endl;
        cout << endl;
    }else{
        cout << "Data 1 ANTES de Data 2" << endl;
        cout << endl;
    }

    if(data1.isBissexto()){
        cout << data1.getAno() << " é bissexto" << endl;
        cout << endl;
    }else{
        cout << data1.getAno() << " NÃO é bissexto" << endl;
        cout << endl;
    }

    return 0;
}
