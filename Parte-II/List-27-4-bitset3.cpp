/** @copyright (C) Andre Duarte Bueno @file List-27-4-bitset3.cpp */

#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int main ()
{
  const int dimensao = 24;	// Dimensão fixa do vetor de bits

  cout << "Entre com o numero de celulas:";	// Dimensão variável do vetor
  int ncelulas;
  cin >> ncelulas;
  cin.get ();

  vector < bitset < dimensao > >v (ncelulas);

  // v[i] acessa a célula i       
  // v[i][j] acessa a célula i posição j

  for (int i = 0; i < v.size (); i++)
    for (int j = 0; j < dimensao; j++)
      v[i][j] = ((i * j) % 2);
  
  for (int i = 0; i < v.size (); i++)
    cout << v[i] << ' ';
  cout << endl;
  
  int d;
  do
    {
      int x, y;
      cout << "Entre com a celula que quer alterar 0->" << v.size () -	1 << ": ";
      cin >> x;

      cout << "Entre com o bit que quer alterar de 0->" << dimensao -	1 << ": ";
      cin >> y;

      cout << "\nEntre com o novo valor do bit(0 ou 1),>1 encerra programa: ";
      cin >> d;
      cin.get ();

      v[x][y] = d;

      cout << "\ncelula " << x << " bit " << y << " valor =" << v[x][y] << endl;

      for (int i = 0; i < v.size (); i++)
	cout << v[i] << "  ";
    }
  while (d <= 1);

  return 0;
}
