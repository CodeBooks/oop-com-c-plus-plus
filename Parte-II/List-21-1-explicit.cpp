/** @copyright (C) Andre Duarte Bueno @file List-21-1-explicit.cpp */

#include <iostream>

using namespace std;

class TData
{

public:

  int x;

  TData (int _x = 10):x (_x)
  {
  };
  // Construtor com explicit
  // explicit TData (int _x = 10): x(_x) { }  
};

void Print (const TData & dat)
{
  cout << dat.x << endl;
}

int main ()
{
  int i = 5;

  TData data (i);		// Cria TData

  cout << "Print(data); ";
  Print (data);			// Imprime data
  
  /* Abaixo deveria ocorrer um erro, pois Print recebe um int. 
     Mas como existe um construtor de TData que recebe um int, vai criar um 
     objeto TData e chamar Print. */
  cout << "Print( 10 ); ";

 
  return 0;
}
