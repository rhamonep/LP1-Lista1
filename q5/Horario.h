#ifndef HORARIO_H
#define HORARIO_H

#include <string>

class Horario{

  private:

    int hora;
    int minuto;
    int segundo;

  public:

    Horario();
    Horario(int hora, int minuto, int segundo);

    int getHora();
    int getMinuto();
    int getSegundo();
    void setHorario(int hora, int minuto, int segundo);

    void avancaHorario();
    std::string toString();
};


#endif //HORARIO_H
