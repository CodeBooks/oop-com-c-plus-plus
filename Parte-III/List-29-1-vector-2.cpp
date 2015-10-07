/** @copyright (C) Andre Duarte Bueno @file List-29-1-vector-2.cpp */

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// Declaração da sobrecarga do operador <<
ostream & operator << (ostream & os, const vector < int >&v);

int main ()
{
  vector < int > v;		// Cria vector, do tipo int, com nome v

  int data;

  cout	<< "No DOS um ctrl+z encerra a entrada de dados." << endl;
  cout	<< "No Mac um ctrl+d encerra a entrada de dados." << endl;
  cout	<< "No GNU/Linux um ctrl+d encerra a entrada de dados." << endl;
  do 
    {
      cout	<< "\nEntre com o dado (" << setw(3) << v.size() << "):";
      cin  		>> data;      cin.get ();
      if(cin.good())
	v.push_back(data);
    } while (cin.good());
  cout	<< "\n"	<< v << endl;

  v[0] = 23427;
  v.insert(v.begin() + 2, 5463);
  cout	<< "\nApós v[ 0 ] = 23427; e v.insert( v.begin() + 2, 5463 );" << endl;
  cout	<< v << endl;
  
  // Chama função erase do objeto vector passando posição v.begin
  v.erase(v.begin());
  cout	<< "\nApós v.erase( v.begin() );\n"	<< v << endl;
  
  // Chama função erase do objeto vector passando v.begin+1 e v.end-1
  cout	<< "\nApós v.erase( v.begin()+1, v.end()-1 );" << endl;
  v.erase( v.begin()+1, v.end()-1);
  cout	<< "o vetor esta " << (v.empty()? "vazio" : "com elementos") << endl;
  cout	<< v << endl;

  // Chama função clear
  v.clear();				  
  cout	<< "o vetor esta " << (v.empty()? "vazio" : "com elementos") << endl;
  cout	<< endl;

  return 0;
}

// Definição da sobrecarga do operador << para mostrar elementos do vetor.
ostream & operator<< (ostream & os, const vector < int >&v)
{
  for (int i = 0; i < v.size(); i++)
    os << "v[" << setw(3) << i << "]=" << setw(5) << v[i] << ' ';
  return os;
}	
