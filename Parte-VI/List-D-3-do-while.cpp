/** @copyright (C) Andre Duarte Bueno @file List-D-3-do-while.cpp */

#include <iostream>
using std::cout;
using std::endl;

int main ()
{
  int     i = 1;
  do
    {				// Sempre realiza o looping pelo menos 1 vez.
      cout << i << "  ";
    }
  while (++i <= 10);

  cout << endl;
  return 0;
}
