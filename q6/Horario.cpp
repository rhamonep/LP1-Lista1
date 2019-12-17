#include "Horario.h"

using namespace std;

Horario::Horario(){
  hora = 0;
  minuto = 0;
  segundo = 0;
}

Horario::Horario(int hora, int minuto, int segundo){
  if((hora >= 0 && hora < 24) && (minuto >= 0 && minuto < 60) && (segundo >= 0 && segundo < 60)){
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
  }else{
    this->hora = 0;
    this->minuto = 0;
    this->segundo = 0;
  }
}

int Horario::getHora(){
  return hora;
}
int Horario::getMinuto(){
  return minuto;
}
int Horario::getSegundo(){
  return segundo;
}

void Horario::setHorario(int hora, int minuto, int segundo){
  if((hora > 0 && hora < 24) && (minuto > 0 && minuto < 60) && (segundo > 0 && segundo < 60)){
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
  }else{
    hora = 0;
    minuto = 0;
    segundo = 0;
  }
}

string Horario::toString(){
  string str = to_string(getHora()) + ":" + to_string(getMinuto()) + ":" + to_string(getSegundo());
  return str;
}

void Horario::avancaHorario(){
  segundo += 1;
  
  if(segundo == 60){
    segundo = 0;
    minuto += 1;
  }

  if(minuto == 60){
    minuto = 0;
    hora += 1;
  }
  if(hora == 24){
    hora = 0;
    minuto = 0;
    segundo = 0;
  }
}
