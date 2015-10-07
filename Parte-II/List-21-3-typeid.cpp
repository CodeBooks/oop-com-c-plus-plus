/** @copyright (C) Andre Duarte Bueno @file List-21-3-typeid.cpp */

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

class A
{
public:
  int a;
};

class B:public A
{
public:
  int b;
};

class K
{
public:
  int k;
};

int main ()
{
  A a;				// Cria objeto do tipo A com nome a
  B b;				// Cria objeto do tipo B com nome b
  K k;				// Cria objeto do tipo K com nome k

  cout << "(typeid(a)==typeid(a))	->" << (typeid (a) == typeid (a)) << endl;
  cout << "(typeid(a)==typeid(b))	->" << (typeid (a) == typeid (b)) << endl;
  cout << "(typeid(a)==typeid(k))	->" << (typeid (a) == typeid (k)) << endl;
  cout << "(typeid(b)==typeid(k))	->" << (typeid (b) == typeid (k)) << endl;

  cout << " typeid(a).name()		->" << typeid (a).name () << endl;
  cout << " typeid(b).name()		->" << typeid (b).name () << endl;
  cout << " typeid(k).name()		->" << typeid (k).name () << endl;
  
  int intObject = 3;
  string nomeintObject (typeid (intObject).name ());
  cout << "nomeintObject		->" << nomeintObject << endl;
  
  double doubleObject = 3;
  string nomedoubleObject (typeid (doubleObject).name ());
  cout << "nomedoubleObject		->" << nomedoubleObject << endl;

  return 0;
}
