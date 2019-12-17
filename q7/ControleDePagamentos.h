#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

#include "Pagamento.h"
#include <vector>

class ControleDePagamentos
{
private:
    std::vector<Pagamento> pagamentos;

public:
    void setPagamentos(Pagamento pagamento);
    Pagamento getPagamentos(int pos);

    double calculaTotalDePagamentos();
    bool existePagamentoParaFuncionario(std::string nomeDoFuncionario);
    void exibeExistePagamentoParaFuncionario(std::string nomeDoFuncionario);
};

#endif