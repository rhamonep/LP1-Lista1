#include "Pagamento.h"
#include <iostream>

using namespace std;

Pagamento::Pagamento(){
    nomeDoFuncionario = "";
    valorPagamento = 0;
}

Pagamento::Pagamento(std::string nomeDoFuncionario, double valorPagamento){
    setNomeDoFuncionario(nomeDoFuncionario);
    setValorPagamento(valorPagamento);
}

void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario){
    this->nomeDoFuncionario = nomeDoFuncionario;
}

void Pagamento::setValorPagamento(double valorPagamento){
    this->valorPagamento = valorPagamento;
}

std::string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}

double Pagamento::getValorPagamento(){
    return valorPagamento;
}

void Pagamento::exibir(){
    cout << "Nome do Funcionário: " << nomeDoFuncionario << endl;
    cout << "Valor do Pagamento: " << valorPagamento << "\n" << endl;
}