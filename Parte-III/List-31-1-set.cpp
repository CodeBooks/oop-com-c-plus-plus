/** @copyright (C) Andre Duarte Bueno @file List-31-1-set.cpp */

#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main ()
{
  
  // Cria um container  set, para tipo int
  set<int, std::less <int> > cset;
  
  // Insere objetos no container (sem ordem)
  cset.insert(10);
  cset.insert(1000);
  cset.insert(100);
  cset.insert(10000);

  std::ostream_iterator < int > out (cout, "\n");

  copy (cset.begin (), 	cset.end (), out );

  return 0;
}

