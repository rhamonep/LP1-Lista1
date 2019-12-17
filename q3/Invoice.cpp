#include "Invoice.h"
#include <iostream>

Invoice::Invoice(){
  numero = 0;
  descricao = "";
  quantidade = 0;
  preco = 0;
}

Invoice::Invoice(int numero, std::string descricao, int quantidade, float preco){
  setNumero(numero);
  setDescricao(descricao);
  setQuantidade(quantidade);
  setPreco(preco);
}

void Invoice::setNumero(int numero){
  this->numero = numero;
}

void Invoice::setDescricao(std::string descricao){
  this->descricao = descricao;
}

void Invoice::setQuantidade(int quantidade){
  this->quantidade = quantidade;
}

void Invoice::setPreco(double preco){
  if(preco > 0)
    this->preco = preco;
  else 
    this->preco = 0;
}

int Invoice::getNumero(){
  return numero;
}

std::string Invoice::getDescricao(){
  return descricao;
}

int Invoice::getQuantidade(){
  return quantidade;
}

float Invoice::getPreco(){
  return preco;
}

float Invoice::getInvoiceAmount(){
  return quantidade * preco;
}
void Invoice::exibir(){
  std::cout << "Número: " << numero << std::endl;
  std::cout << "Descricao: " << descricao << std::endl;
  std::cout << "Quantidade: " << quantidade << std::endl;
  std::cout << "Preco: R$" << preco << std::endl;
  std::cout << "Total: R$" << getInvoiceAmount() << "\n" << std::endl;
}
