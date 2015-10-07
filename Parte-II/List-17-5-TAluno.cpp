/** @copyright (C) Andre Duarte Bueno @file List-17-5-TAluno.cpp */

#include <iostream>

using namespace std;

#include "List-17-4-TAluno.h"

int TAluno::numeroAlunos = 0;

const  string TAluno::universidade = "Universidade Federal de Santa Catarina";

TAluno::TAluno ():iaa (0.0)
{
  numeroAlunos++;
  cout << "criou objeto TAluno (" << numeroAlunos << ") construtor default" <<    endl;
}

TAluno::TAluno (const TAluno & obj):  TPessoa (obj)
{
  iaa = obj.iaa;
  numeroAlunos++;
  cout << "criou objeto TAluno (" << numeroAlunos << ") construtor de cópia"
       << endl;
}

TAluno::TAluno (string _nome, string _matricula, double _iaa):
  TPessoa (_nome, _matricula),
  iaa (_iaa)
{
  numeroAlunos++;
  cout << "criou objeto TAluno (" << numeroAlunos <<") construtor sobrecarregado" << endl;
}

TAluno::~TAluno ()
{
  cout << "destruiu objeto TAluno:" << numeroAlunos << endl;
  numeroAlunos--;
}

void TAluno::Entrada ()
{
  TPessoa::Entrada ();		// Chama Método da classe base 

  // Adiciona abaixo o que é diferente nesta classe
  cout << "Entre com o IAA do aluno: ";
  cin >> iaa;
  cin.get ();
}

void      TAluno::Saida (ostream & os) const 
{
  TPessoa::Saida (os);
  os << "iaa : " << iaa << endl;
}
