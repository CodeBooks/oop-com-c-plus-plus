/** @copyright (C) Andre Duarte Bueno @file List-17-1-Polimorfismo.cpp */

#include <iostream>

#include <iostream>
#include "List-11-5-TPonto.h"
#include "List-15-1-TCirculo.h"
#include "List-16-2-TElipse.h"

using namespace std;

// Exemplo de criação e utilização do objeto TPonto, TCirculo e TElipse
int main ()
{
  TPonto *ptr = NULL;		// 1. Crie um ponteiro para a classe base
  int selecao;

  do
    {				// 2. Pergunte para o usuário qual objeto será criado
      cout << "\nQual objeto criar? ";
      cout << "\nTPonto................(1)";
      cout << "\nTCirculo..............(2)";
      cout << "\nTElipse...............(3)";
      cout << "\nPara sair 4?:";
      cin >> selecao;      cin.get ();

      switch (selecao)		// 3. Crie o objeto selecionado
	{
	case 1:
	  ptr = new TPonto (1, 2);
	  break;

	case 2:
	  ptr = new TCirculo (1, 2, 3);
	  break;

	case 3:
	  ptr = new TElipse (1, 2, 3, 4);
	  break;

	default:
	  ptr = new TCirculo (1, 2, 3);
	  break;
	}

      ptr->Desenha ();		// 4. Utiliza o objeto criado ptr->outros_métodos

      delete ptr;		// 5. Para destruir o objeto criado

      ptr = NULL;
    }
  while (selecao < 4);

  return 0;
}
