/** @copyright(C) Andre Duarte Bueno @file List-19-3-TesteTPontoComSobrecarga.cpp */
#include <iostream>
#include "List-19-1-TPontoComSobrecarga.h"
using namespace std;

// Exemplo de criação e uso do objeto TPonto, com sobrecarga
int main ()	
{
  int x;
  int y;

  // Cria objeto do tipo TPonto com nome p1,p2,p3
  TPonto p1, p2, p3;

  // Usando operador >>
  cout << "Entre com os valores de p1 [x enter y enter]:";
  cin >> p1;
  cin.get ();

  // Usando operador <<
  cout << "---p1-->" << p1 << " ---p2-->" << p2 << " ---p3-->" << p3 << endl;
  
  // Usando operador =
  p2 =  p1;			
  cout << "Após p2 = p1" << endl;
  cout << "---p1-->" << p1 << " ---p2-->" << p2 << " ---p3-->" << p3 << endl;

  // Usando operador ==   
  cout << "Testando p1 == p2" << endl;	
  if (p1 == p2)
    cout << "p1 == p2" << endl;
  else
    cout << "p1 != p2" << endl;

  // Usando operador ++
  p2++;				
  cout << "Após p2++" << endl;
  cout << "---p1-->" << p1 << " ---p2-->" << p2 << " ---p3-->" << p3 << endl;
  cout << "Fazendo p3 = p2++" << endl;	
  
  // Usando operador =
  p3 = p2++;
  cout << "---p1-->" << p1 << " ---p2-->" << p2 << " ---p3-->" << p3 << endl;
  cout << "Fazendo p3 = ++p2" << endl;	

  // Usando operador =
  p3 = ++p2;
  cout << "---p1-->" << p1 << " ---p2-->" << p2 << " ---p3-->" << p3 << endl;
  cout << "Testando p2 == p3" << endl;	

  // Usando operador !=
  if (p2 != p3)
    cout << "p2!=p3" << endl;
  else
    cout << "p2==p3" << endl;

  // Usando operador + e =
  p3 = p1 + p2;			
  cout << "Após p3 = p1 + p2" << endl;
  cout << "---p1-->" << p1 << " ---p2-->" << p2 << " ---p3-->" << p3 << endl;

  return 0;
}
