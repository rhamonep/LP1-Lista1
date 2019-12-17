#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){

  Invoice produto1 = Invoice();
  Invoice produto2 = Invoice(2, "Produto 2", 10, 25.99);
  Invoice produto3 = Invoice();

  produto1.setNumero(1);
  produto1.setQuantidade(20);
  produto1.setDescricao("Produto 1");
  produto1.setPreco(99.99);

  produto1.exibir();
  produto2.exibir();
  produto3.exibir();

  return 0;
}
