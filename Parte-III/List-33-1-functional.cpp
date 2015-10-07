/** @copyright (C) Andre Duarte Bueno @file List-33-1-functional.cpp */

#include <iostream>
#include <functional>
#include <deque>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iomanip>

using namespace std;

// Classe Função
// Cria uma função objeto a partir de uma função unária
// unary_function<retorno, parâmetro>
template<class Arg>
class TFatorial : public unary_function<Arg, Arg>
{ 
public:
  Arg operator()(const Arg& arg)
  { 
    Arg a = 1;
    for( Arg i = 2; i <= arg; i++ )
      a *= i;
    return a;
  }
};

int main()
{ 
  // Cria um deque 
  deque<int> d(10);
		
  for( int i = 0; i < d.size(); i++) 
    d[i] = i;

  // Cria um vetor para armazenar os fatoriais
  vector<int> v(10);		
  
  // Determina o fatorial dos números armazenados em d e armazena no vetor v
  transform(d.begin(), d.end(), v.begin(), TFatorial<int>());
  cout	<< "Números: " << endl << " ";
  copy(d.begin(),d.end(),ostream_iterator<int>(cout," \t"));
  cout	<< "\n e fatoriais: " << endl << " ";
  copy(v.begin(),v.end(),ostream_iterator<int>(cout," \t"));
  cout	<< endl << endl;
  char resp;
  
  TFatorial<int> objeto_funcao;
  do {
    cout << "Entre com um número (int):";
    int numero;
    cin >> numero; cin.get();
    cout << "Número = "<< setw(7) << numero <<" fatorial = " << setw(7) << objeto_funcao(numero) << endl;
    cout << "Continuar (s/n)?";
    cin.get(resp); cin.get();
  } while(resp == 's' || resp == 'S');
  
  return 0; 
}
