/** @copyright (C) Andre Duarte Bueno @file List-36-6-vector-desalinhado.cpp*/
#include <iostream>
#include <vector>

int main () 
{
  std::vector < int >v;
  int data;
  v.push_back (11);
  v.push_back (21);
  v.push_back (1211);
  v.push_back (12311);
  for (int i = 0; i < v.size (); i++)
    std::cout << "v[" << i << "]=" << v[i] << ' ';
  std::cout << std::endl;
  if (v.empty ())    std::cout << "O vetor	está vazio" << std::endl;
  else    std::cout << "O vetor	não está vazio" << std::endl;
  v.clear ();
  if (v.empty ())    std::cout << "O vetor	está vazio" << std::endl;
    else    std::cout << "O vetor não está vazio" << std::endl;
  return 0;
}


