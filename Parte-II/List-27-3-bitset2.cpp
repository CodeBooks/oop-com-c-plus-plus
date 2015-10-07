/** @copyright (C) Andre Duarte Bueno  @file  List-27-3-bitset2.cpp */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <bitset>
#include <cmath>

int main ()
{
  const int    dimensao = 10;

  std::bitset < dimensao > b;

  cout << b << endl;
  
  b.flip ();
  cout << b << endl;
  
  cout << " O bitset tem a dimensao:" << b.size () << endl;

  cout << " Entre com a posição do bit que quer inverter (0->9):";
  int    pos;
  cin >> pos;
  cin.get ();

  b.flip (pos);
  cout << b << endl;
  
  return 0;
}
