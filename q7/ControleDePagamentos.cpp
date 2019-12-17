#include "ControleDePagamentos.h"
#include <iostream>

using namespace std;

void ControleDePagamentos::setPagamentos(Pagamento pagamento){
    pagamentos.push_back(pagamento);
}

Pagamento ControleDePagamentos::getPagamentos(int pos){
    Pagamento null;

    if(pos < pagamentos.size()){
        return pagamentos[pos];
    }
    return null;
}

double ControleDePagamentos::calculaTotalDePagamentos(){
    double total = 0;
    for(Pagamento atual : pagamentos){
        total += atual.getValorPagamento();
    }
    return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nomeFuncionario){
    for(Pagamento atual : pagamentos)
        if(atual.getNomeDoFuncionario() == nomeFuncionario)
            return true;
    return false;
}

void ControleDePagamentos::exibeExistePagamentoParaFuncionario(std::string nomeFuncionario){
  if(existePagamentoParaFuncionario(nomeFuncionario)){
    cout << "Pagamento Existente!" << "\n" << endl;
  }else{
    cout << "Pagamento NÃO existente!" << "\n" << endl;
  }
}