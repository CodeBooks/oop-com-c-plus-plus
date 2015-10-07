/** @copyright (C) Andre Duarte Bueno @file List-17-7-TFuncionario.cpp */
#include <iostream>

using namespace std;

#include "List-17-6-TFuncionario.h"

TFuncionario::TFuncionario ():indiceProdutividade (0.0)
{
  cout << "criou objeto TFuncionario construtor default" << endl;
}

TFuncionario::TFuncionario (const TFuncionario & obj):
  TPessoa (obj)
{
  indiceProdutividade = obj.indiceProdutividade;
  cout << "criou objeto TFuncionario construtor de cópia" << endl;
}

TFuncionario::TFuncionario (string _nome, string _matricula, double _ip):
  TPessoa (_nome, _matricula),
  indiceProdutividade (_ip)
{
  cout << "criou objeto TFuncionario construtor sobrecarregado" << endl;
}

TFuncionario::~TFuncionario ()
{
  cout << "destruiu objeto TFuncionario:" << endl;
}

void TFuncionario::Entrada ()
{
  TPessoa::Entrada ();
  cout << "Entre com o indiceProdutividade do funcionario: ";
  cin >> indiceProdutividade;
  cin.get ();
}

void TFuncionario::Saida (ostream & os) const 
{
  TPessoa::Saida (os);
  os << "indiceProdutividade : " << indiceProdutividade << endl;
}
