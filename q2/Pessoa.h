#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa{

private:

  std::string nome;
  std::string telefone;
  int idade;

public:

  Pessoa(std::string nome);
  Pessoa(std::string nome, int idade, std::string t);

  void setIdade(int idade);
  void setNome(std::string nome);
  void setTelefone(std::string telefone);

  int getIdade();
  std::string getNome();
  std::string getTelefone();

  void exibir();
};

#endif
