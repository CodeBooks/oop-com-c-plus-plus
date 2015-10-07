/** @copyright (C) Andre Duarte Bueno @file List-32-2-vector-3.cpp */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>				// Classe de vetores
#include <algorithm>				// Classe para algoritmos genéricos

using namespace std;				// Define o uso do espaço de nomes std

// Declaração de sobrecarga de << e >>
ostream & operator << (ostream & os, const vector <int> &v);
ofstream & operator << (ofstream & os, const vector <int> &v);

bool maiorQue5(int valor)			// Declaração de função predicado
{
  return valor > 5;
}

int main()
{
  string linha =" ----------------------------------------------------------\n";
  vector<int>v;
  int data;
  do	
    {
      cout	<< "\nEntre com o dado (" << setw (3) << v.size () << "):";
      cin	>> data;
      cin.get();
      if(cin.good())
	v.push_back(data);
    } while ( cin.good());
  cin.get();
  cin.clear(); 					// Reseta objeto cin para estado ok
  {
    ofstream fout("vector.dat");
    if (! fout)
      return 0;		fout	<< v << endl;
    fout.close();
  }
  cout	<< "\n" << linha << v << endl;

  int numero;
  cout	<< "\nEntre com o número a ser localizado:";
  cin	>> numero;
  cin.get();

  // Ponteiro para a posição localizada
  vector <int>::iterator it = find (v.begin() , v.end() , numero) ;
  cout	<< "\nNúmero localizado na posição:" << (it - v.begin()) << endl;

  // Localiza primeiro elemento que satisfaz a condição dada pela função maiorQue5
  it = find_if (v.begin() , v.end() , maiorQue5);
  cout	<< "\nNúmero maior que 5 localizado na posição:" << (it - v.begin())  << endl;;

  // Ordena o container
  sort(v.begin() , v.end());
  cout	<< "\nVetor após ordenação com sort(v.begin(),v.end())" << endl;
  cout	<< linha << v << endl;

  // Preenche com o valor 45
  fill(v.begin() , v.end() , 45);
  cout	<< "\nVetor após fill(v.begin(), v.end() , 45);" << endl;
  cout	<< linha << v << endl;

  // Retorna dimensão e capacidade
  cout	<< "v.size()=" << v.size() << endl;
  cout	<< "v.capacity()=" << v.capacity() << endl;

  // Redimensiona o container
  v.resize(20);
  cout	<< "\nVetor após resize(20):" << endl;
  cout	<< linha << v << endl;
  cout	<< "v.size()=" << v.size() << endl;
  cout	<< "v.capacity()=" << v.capacity() << endl;
  cout	<< linha << endl;
  cin.get();
  return 0;
}

ostream & operator << (ostream & os , const vector < int >&v)
{
  for (int i = 0; i < v.size() ; i++)
    os << "v[" << setw (3) << i << "]=" << setw(5) << v[i] << ' ';
  return os;
}

ofstream & operator<< ( ofstream & os , const vector < int >&v)
{
  for (int i = 0; i < v.size() ; i++)
    os << setw (10) << v[i] << endl;
  return os;
}
