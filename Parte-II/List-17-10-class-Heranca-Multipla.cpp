/** @copyright (C) Andre Duarte Bueno @file List-17-10-class-Heranca-Multipla.cpp */
#include <iostream>
#include <fstream>
#include <string>

//      Inclusão de todos os arquivos de cabeçalho *.h
#ifndef List_17_2_TPessoa_h
#include "List-17-2-TPessoa.h"
#endif

#ifndef List_17_4_TAluno_h
#include "List-17-4-TAluno.h"	
#endif

#ifndef List_17_6_TFuncionario_h
#include "List-17-6-TFuncionario.h"
#endif

#include "List-17-8-TAlunoFuncionario.h"

using namespace std;

int main ()
{
  string linha = "--------------------------------------------------------------\n";
  int resp = 0;
  do
    {
      cout << linha << "Seleção do tipo de objeto\n\a"
	   << "TPessoa....................0\n"
	   << "TAluno.....................1\n"
	   << "TFuncionario...............2\n"
	   << "TAlunoFuncionario..........3:\n" << linha;
      cin >> resp;
      cin.get ();

      // Cria ponteiro para um objeto, pode ser um TPessoa ou um TAluno
      // O ponteiro sempre aponta para a classe-base.
      TPessoa *pobj = NULL;

      switch (resp)		// Estrutura de controle
	{
	case 0:		// Cria objeto TPessoa
	  pobj = new TPessoa ();
	  break;
	case 1:		// Cria objeto TAluno
	  pobj = new TAluno ();
	  break;
	case 2:		// Cria objeto TFuncionario
	  pobj = new TFuncionario ();
	  break;
	case 3:		// Cria objeto TAlunoFuncionario
	  //pobj = new TAlunoFuncionario();
	  {
	    TAlunoFuncionario paf;
	    paf.Entrada ();
	    paf.Saida (cout);
	  }
	  break;
	case -1:
	default:
	  cout << "\nSair." << endl;
	  break;
	}

      if (pobj != NULL)
	{
	  // Este bloco usa pobj sem saber se criou TPessoa, TAluno, TFuncionario
	  pobj->Entrada ();
	  pobj->Saida (cout);
	  delete pobj;
	  pobj = NULL;
	}
    }
  while (resp != -1);

  return 0;
}
