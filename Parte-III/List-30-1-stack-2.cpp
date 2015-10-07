/** @copyright (C) Andre Duarte Bueno @file List-30-1-stack-2.cpp */

#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <string>

using namespace std;

int main ()
{

  // Cria uma pilha a partir de um container deque, vector e list.
  std::stack	<string>                     politicos;
  std::stack	<int,  std::vector <int> >   partidos;
  std::stack	<float,  std::list <float> > nota_do_politico;

  // Adicionando elementos ao container
  char resp;
  do 
    {
      cout << "Entre com o nome do politico:" <<  endl;
      string nome_politico;
      getline(cin, nome_politico);
      politicos.push (nome_politico);
      
      cout << "Entre com o numero do partido:" <<  endl;
      int numeroPartido;
      cin >> numeroPartido;      cin.get();
      partidos.push (numeroPartido);
      
      cout << "Entre com a nota do politico:" <<  endl;
      int nota;
      cin >> nota;      cin.get();
      nota_do_politico.push (nota);
      
      cout << "Continuar (c) ou sair (q):";
      cin >> resp; cin.get();
    } while (resp != 'q' && resp != 'Q');
  
  cout	<< "\nRetirando elementos do container: ";
  while (!politicos.empty ())
    {
      cout	<< politicos.top	()	<< ' ';
      politicos.pop ();
      cout	<< partidos.top	()	<< ' ';
      partidos.pop ();
      cout	<< nota_do_politico.top ()	<< ' ' << endl;
      nota_do_politico.pop	();
    }
  cout << endl;

  return 0;
}
