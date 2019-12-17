#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

class Pagamento
{
private:
    std::string nomeDoFuncionario;
    double valorPagamento;

public:
    Pagamento();
    Pagamento(std::string nomeDoFuncionario, double valor);

    void setValorPagamento(double valor);
    void setNomeDoFuncionario(std::string nomeDoFuncionario);

    double getValorPagamento();
    std::string getNomeDoFuncionario();

    void exibir();
};

#endif