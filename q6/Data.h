#ifndef DATA_H
#define DATA_H

#include <string>

class Data{

  private:

    int dia;
    int mes;
    int ano;

    bool verificaDia();
    bool verificaMes();
    bool verificaAno();
  public:

    Data();
    Data(int dia, int mes, int ano);

    int getDia();
    int getMes();
    int getAno();
    void setData(int dia, int mes, int ano);
    bool verificaData();
    std::string getMesExtenso();
    int compara(Data comp);
    bool isBissexto();
};


#endif //DATA_H
