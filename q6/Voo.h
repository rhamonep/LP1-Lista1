#ifndef VOO_H
#define VOO_H

#include "Horario.h"
#include "Data.h"

class Voo{

    private:

        int numero;
        Data data;
        Horario horario;
        bool cadeiras[100];

    public:

        Voo(int numero, Data data, Horario horario);
        int proximoLivre();
        bool verifica(int numero);
        bool ocupa(int numero);
        int vagas();

        int getNumeroVoo();
        Data getData();
        Horario getHorario();
};
#endif