#include "Voo.h"

Voo::Voo(int numero, Data dia, Horario horario){
    this->numero = numero;
    this->data = dia;
    this->horario = horario;

    for(int i = 0; i < 100; i++){
        cadeiras[i] = false;
    }
}

int Voo::proximoLivre(){
    for(int i = 0; i < 100; i++){
        if(!cadeiras[i]){
            return i;
        }
    }
}

bool Voo::verifica(int numero){ 
    return cadeiras[numero];
}

bool Voo::ocupa(int numero){
    if(!verifica(numero)){
        cadeiras[numero] = true;
        return true;
    }else{
        return false;
    }
}

int Voo::vagas(){
    int disponiveis = 0;
    for(int i = 0; i < 100; i++){
        if(!cadeiras[i]){
            disponiveis++;
        }
    }
    return disponiveis;
}

int Voo::getNumeroVoo(){ 
    return numero; 
}
Data Voo::getData(){ 
    return data; 
}
Horario Voo::getHorario(){ 
    return horario; 
}