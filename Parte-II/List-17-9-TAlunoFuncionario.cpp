/** @copyright (C) Andre Duarte Bueno @file List-17-9-TAlunoFuncionario.cpp*/

#include <iostream>

using namespace std;

#include "List-17-8-TAlunoFuncionario.h"

TAlunoFuncionario::TAlunoFuncionario ()
{
  cout << "criou objeto TAlunoFuncionario construtor default" << endl;
};

TAlunoFuncionario::~TAlunoFuncionario ()
{
  cout << "destruiu objeto TAlunoFuncionario" << endl;
}

void TAlunoFuncionario::Entrada ()
{
  TAluno::Entrada ();

  TFuncionario::Entrada ();

  cout << "Entre com o indice de pobreza: ";
  cin >> ip;
  cin.get ();
}

/* // Solução para não chamar nome e matrícula 2 vezes.
   void TAlunoFuncionario::Entrada()
   {
   TAluno::Entrada();				// Entrada de nome, matricula, iaa
   // Entrada do indiceProdutividade
   cout << "Entre com o indiceProdutividade do funcionario: ";
   cin >> indiceProdutividade;	cin.get();
   cout << "Entre com o indice de pobreza: ";	
   cin >> ip;	cin.get();			// Entrada do indicepobreza (ip)
   } */

// Saída de dados
void TAlunoFuncionario::Saida (ostream & os) const 
{
  TAluno::Saida (os);

  TFuncionario::Saida (os);

  os << "indice pobreza= : " << ip << endl;
}
