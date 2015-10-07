/** @copyright (C) Andre Duarte Bueno @file List-D-6-while2.cpp */
#include <iostream>
using std::cout;
using std::endl;

int main ()
{
  int  y, x = 1, total = 0;

  while (x <= 5)
    {
      y = x * x;
      cout << x << "\t" << y << endl;
      total += y;
      ++x;
    }
  cout << "Total= " << total << endl;

  return 0;
}
