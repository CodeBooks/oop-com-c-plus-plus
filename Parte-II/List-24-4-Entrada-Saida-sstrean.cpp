/** @copyright (C) Andre Duarte Bueno @file List-24-4-Entrada-Saida-sstrean.cpp */
#include <iostream>		// streams
#include <string>		// string de C++
#include <sstream>		// stream e string junto

using namespace std;

int main ()
{
  string s1 ("oi_tudo"), s2 (" bem");	// Cria objetos

  double d = 1.2345;

  int i = 5;

  // Objeto do tipo ostringstream, funciona ora como stream ora como string
  ostringstream os;

  // O objeto "os" funciona como uma stream, como cout    
  os << s1 << " " << s2 << " " << d << " " << i;


  // A seguir o objeto os funciona como uma string        
  cout << "os.str()=" << os.str () << endl;

  // Cria objeto do tipo istringstream com nome in, aqui in funciona como uma string
  istringstream in (os.str ());

  // Cria strings s3 e s4 e dados numéricos d2 e i2
  string s3, s4;
  double d2;
  int i2;

  // Extrai os dados da stream in e armazena em s3,s4,d2,i2 
  // aqui in funciona como uma stream, como cin
  in >> s3 >> s4 >> d2 >> i2;
  cout << "s3 = " << s3 << "\n" << "s4 = " << s4 << "\n" << "d2 = "
       << d2 << "\n" << "i2 = " << i2 << endl;

  return 0;
}
