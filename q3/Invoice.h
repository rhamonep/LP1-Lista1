#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice{

private:

  int numero;
  int quantidade;
  std::string descricao;
  float preco;

public:

  Invoice();
  Invoice(int numero, std::string descricao, int quantidade, float preco);

  void setNumero(int);
  void setDescricao(std::string);
  void setQuantidade(int);
  void setPreco(double);

  int getNumero();
  std::string getDescricao();
  int getQuantidade();
  float getPreco();
  float getInvoiceAmount();
  void exibir();
};

#endif
