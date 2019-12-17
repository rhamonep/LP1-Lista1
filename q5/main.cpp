#include <iostream>
#include "Horario.h"

using namespace std;

int main() {
    Horario horario1 = Horario(15, 30, 31);
    Horario horario2 = Horario();

    cout << "Horario 1: " << horario1.toString() << endl;
    cout << "Horario 2: " << horario2.toString() << endl;

    horario1.avancaHorario();

    cout << "Horario 1: " << horario1.toString() << endl;

    horario2.setHorario(23, 59, 59);

    cout << "Horario 2: " << horario2.toString() << endl;
    
    horario2.avancaHorario();

    cout << "Horario 2: " << horario2.toString() << endl;

    return 0;
}
