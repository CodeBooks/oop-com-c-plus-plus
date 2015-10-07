/** @copyright (C) Andre Duarte Bueno  @file  List-27-5-bitset4.cpp */

#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int main ()
{
  //dimensao fixa do vetor de bits
  const int dimensao = 5;
  
  //dimensao variavel do vetor de celulas 
  cout << "Entre com o numero de celulas:";
  int ncelulas;
  cin >> ncelulas;
  cin.get ();
  
  vector < bitset < dimensao > >v (ncelulas);
  
  //v[i] acessa a célula i 
  for (int i = 0; i < v.size (); i++)
    for (int j = 0; j < dimensao; j++)
      {
	v[i][j] = ((i + j) % 2);
      }
  cout << endl;
  
  //ponteiro ou iterador para vetor de celulas
  vector < bitset < dimensao > >::iterator it;
  
  //Formato 1 (imprime todos os elementos de cada célula)
  for (it = v.begin (); it != v.end (); it++)
    cout << *it << ' ';
  cout << endl;
  
  //Formato 2 (imprime os elementos de cada célula separadamente)
  for (int i = 0; i < dimensao; i++)
    for (it = v.begin (); it != v.end (); it++)
      cout << (*it)[i] << ' ';
  cout << endl;
  
  /*  
  //Formato 3 (idem a 2 usando iterador para elementos do bitset)
  //ponteiro ou iterador para elemento de bitset
  bitset <dimensao> * ib;
  for(it =  v.begin(); it != v.end(); it++)//Percorre as células
  for(ib = &((*it).begin()); ib != &((*it).end()) ; ib++) //Percorre os bits de cada célula
  cout << (*ib) <<' ';
  cout << endl;
  */
  return 0;
}
