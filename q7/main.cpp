#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

using namespace std;

int main(){
    ControleDePagamentos pagamentos;

    Pagamento pagamento1 = Pagamento("Ygor", 1500);
    Pagamento pagamento2 = Pagamento("Antonio", 4200);
    Pagamento pagamento3;

    pagamentos.setPagamentos(pagamento1);
    pagamentos.setPagamentos(pagamento2);
    pagamentos.setPagamentos(pagamento3);

    cout << "Total de pagamentos: " << pagamentos.calculaTotalDePagamentos() << endl;
    cout << endl;

    pagamento3.setNomeDoFuncionario("Tobias");
    pagamento3.setValorPagamento(3300);

    pagamentos.setPagamentos(pagamento3);

    pagamentos.getPagamentos(0).exibir();
    pagamentos.getPagamentos(1).exibir();
    pagamentos.getPagamentos(2).exibir();
    pagamentos.getPagamentos(3).exibir();

    cout << "Existe pagamento para funcionario \"Ygor\"?" << endl;
    pagamentos.exibeExistePagamentoParaFuncionario("Ygor");
    cout << "Existe pagamento para funcionario \"Qualquer\"?" << endl;
    pagamentos.exibeExistePagamentoParaFuncionario("Qualquer");

    cout << "Total de pagamentos: " << pagamentos.calculaTotalDePagamentos() << endl;
    cout << endl;

    return 0;
}