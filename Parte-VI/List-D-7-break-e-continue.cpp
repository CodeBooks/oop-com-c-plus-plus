/** @copyright (C) Andre Duarte Bueno @file List-D-7-break-e-continue.cpp */
#include <iostream>

using namespace std;

void funcao_break ();

void funcao_continue ();

int main ()
{
  char resp;
  do
    {
      cout << "Testar o break (b) ou o continue (c), (q) para sair:" << endl;
      cin.get (resp);
      cin.get ();

      switch (resp)
	{
	case 'b':
	case 'B':
	  funcao_break ();
	  break;

	case 'c':
	case 'C':
	  funcao_continue ();
	  break;

	case 'q':
	case 'Q':
	  cout << "Tchau." << endl;
	  break;

	default:
	  cout << "Opção inválida:" << endl;
	}
    }
  while (resp != 'q' && resp != 'Q');
  return 0;
}

void funcao_break ()
{
  for (int x = 1; x <= 10; x++)
    {
      if (x == 5)
	break;			// Encerra o looping quando x==5
      cout << x << ' ';
    }
  cout << "\nQuando x==5, executa o break e sai do looping." << endl;
}

void funcao_continue ()
{
  for (int x = 1; x <= 20; x += 1)
    {
      if (x == 5)
	continue;		// Pula para próximo passo do looping quando x==5
      cout << x << ";";
    }
  cout << "\nUm continue continua o looping, mas pula todas as linhas abaixo.";
  cout << "\nObserve acima que não imprimiu o número 5." << endl;
}
