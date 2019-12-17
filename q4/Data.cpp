#include "Data.h"

using namespace std;

Data::Data(){
    dia = 1;
    mes = 1;
    ano = 1;
}

Data::Data(int dia, int mes, int ano){
  this->dia = dia;
  this->mes = mes;
  this->ano = ano;
}

int Data::getDia(){
  return dia;
}
int Data::getMes(){
  return mes;
}
int Data::getAno(){
  return ano;
}

void Data::setData(int dia, int mes, int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    if(!verificaData()){
      this->dia = 1;
      this->mes = 1;
      this->ano = 1;
    }
}

bool Data::verificaDia(){
  if(dia >= 1 && dia <= 31)
    return true;
  return false;
}

bool Data::verificaMes(){
  if(mes >= 1 && mes <= 12)
    return true;
  return false;
}

bool Data::verificaData(){
  if(verificaDia() && verificaMes() && verificaAno())
    return true;
  return false;
}

bool Data::verificaAno(){
  if(this->ano >= 1)
    return true;
  return false;
}

bool Data::isBissexto(){
  if(ano % 400 == 0){
    return true;
  }else if(ano % 4 == 0 && ano % 100 != 0){
    return true;
  }else{
    return false;
  }
}

int Data::compara(Data compara){
  if(compara.getDia() == dia && compara.getMes() == mes && compara.getAno() == ano){
    return 0;
  }else if(ano > compara.getAno() || mes > compara.getMes() || dia > compara.getDia()){
    return 1;
  }else{
    return -1;
  }
}

std::string Data::getMesExtenso(){
  switch (mes){
    case 1:
      return "Janeiro";
      break;
    case 2:
      return "Fevereiro";
      break;
    case 3:
      return "Março";
      break;
    case 4:
      return "Abril";
      break;
    case 5:
      return "Maio";
      break;
    case 6:
      return "Junho";
      break;
    case 7:
      return "Julho";
      break;
    case 8:
      return "Agosto";
      break;
    case 9:
      return "Setembro";
      break;
    case 10:
      return "Outubro";
      break;
    case 11:
      return "Novembro";
      break;
    case 12:
      return "Dezembro";
      break;
  }
}
