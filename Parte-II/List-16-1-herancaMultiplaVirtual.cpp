/** @copyright (C) Andre Duarte Bueno 
    @file List-16-1-herancaMultiplaVirtual.cpp */

#include <iostream>

using namespace std;

class B1
{
  int atr_b1;

public:
  B1 ()
  {
    cout << "Construtor B1 -";
  };

  ~B1 ()
  {
    cout << "Destrutor  B1 -";
  };
};

class B2
{
  int atr_b2;

public:
  B2 ()
  {
    cout << "Construtor B2 -";
  };

  ~B2 ()
  {
    cout << "Destrutor  B2 -";
  };
};

class D1:public B2, virtual public B1
{

public:

  D1 ()
  {
    cout << "Construtor D1 -";
  };

  ~D1 ()
  {
    cout << "Destrutor  D1 -";
  };
};

class D2:public B2, virtual public B1
{

public:

  D2 ()
  {
    cout << "Construtor D2 -";
  };

  ~D2 ()
  {
    cout << "Destrutor  D2 -";
  };
};

class Top:public D1, virtual public D2
{

public:

  Top ()
  {
    cout << "Construtor Top -";
  };

  ~Top ()
  {
    cout << "Destrutor  Top -";
  };
};

int main ()
{
  Top p;

  return 0;
}
