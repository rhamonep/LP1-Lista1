#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(std::string nome){
  setNome(nome);
  setIdade(0);
  setTelefone("");
}

Pessoa::Pessoa(std::string nome, int idade, std::string telefone){
  setNome(nome);
  setIdade(idade);
  setTelefone(telefone);
}

void Pessoa::setIdade(int idade){
  this->idade = idade;
}

void Pessoa::setNome(std::string nome){
  this->nome = nome;
}

void Pessoa::setTelefone(std::string telefone){
  this->telefone = telefone;
}

int Pessoa::getIdade(){
  return idade;
}

std::string Pessoa::getNome(){
  return nome;
}

std::string Pessoa::getTelefone(){
  return telefone;
}

void Pessoa::exibir(){
  cout << "Nome: " << nome << endl;
  cout << "Idade: " << idade << endl;
  cout << "Telefone: " << telefone << "\n" << endl;
}