/** @copyright (C) Andre Duarte Bueno @file List-G.3-Enumeracoes.cpp */

#include <iostream>
#include <iomanip>

#include <string>
using namespace std;

// Protótipo
// enum Tipo { valores };
// Cria uma enumeração sem nome
enum 
  {
    jan=1,fev,mar,abr,mai,jun,jul,ago,set,out,nov,dez
  };

// Abaixo sobrecarga do operador++
int main()
{
  for ( int i = 1; i <= 12; i++ )
    {
      cout << "\ni = "<< i ;
      switch(i)
	{
	case jan: cout << setw(20) <<  " janeiro"; break;
	case fev: cout << setw(20) <<  " fevereiro"; break;
	case mar: cout << setw(20) <<  " março"; break;
	case abr: cout << setw(20) <<  " abril"; break;
	case mai: cout << setw(20) <<  " maio"; break;
	case jun: cout << setw(20) <<  " junho"; break;
	case jul: cout << setw(20) <<  " julho"; break;
	case ago: cout << setw(20) <<  " agosto"; break;
	case set: cout << setw(20) <<  " setembro"; break;
	case out: cout << setw(20) <<  " outubro"; break;
	case nov: cout << setw(20) <<  " novemvro"; break;
	case dez: cout << setw(20) <<  " dezembro"; break;
	};
    }
  cout << endl;
  return 0;
}

