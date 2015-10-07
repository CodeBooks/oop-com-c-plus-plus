#include <iostream>
#include <string>

using namespace std;
 
// Define Uma estrutura Pessoa
struct Pessoa
{
public:
  string nome;
  int idade;
  
  // Define uma estrutura aninhada
  // a estrutura Familia dentro de Pessoa
  struct Familia
  {
    string nome_familia;
    int  numeroIrmaos;
  } Familia;
};

int main()
{
// Cria objeto do tipo Pessoa
  Pessoa Joao;
  Joao.nome = "João";
  Joao.idade = 21;
  Joao.Familia.numeroIrmaos = 3;
  Joao.Familia.nome_familia= "da Silva";
  
  cout << Joao.nome << " " << Joao.Familia.nome_familia << endl;
  cout << Joao.idade << " anos" << endl;
  cout << "tem " << Joao.Familia.numeroIrmaos << " irmaos" << endl;
  
  return 0; 
}

