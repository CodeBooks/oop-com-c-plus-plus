/** @copyright (C) Andre Duarte Bueno @file List-41-1-bug.cpp */  
#include <iostream>
int main () 
{
  std::cout << "Oi tudo bem " << std::endl;
  int array[10];
  for (int i = 0; i <= 1000; i++)
    array[i] = i;
  return 0;
}


