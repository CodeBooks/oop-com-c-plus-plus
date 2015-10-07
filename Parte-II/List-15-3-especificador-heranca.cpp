/** @copyright (C) Andre Duarte Bueno 
    @file List-15-3-especificador-heranca.cpp */

#include <iostream>
using namespace std;

class A
{
public:
  int x;

protected:
  int y;

private:
  int z;
};

class B:public A
{
public:
  int X ()
  {
    return x;
  };				// Ok x é público

  int Y ()
  {
    return y;
  };				// Ok y é protegido

  int Z ()
  {
    return z;
  };				// Erro não tem acesso a z
};

class C:private A
{
public:
  int X ()
  {
    return x;
  };				// Ok x é privado

  int Y ()
  {
    return y;
  };				// Ok y é privado

  int Z ()
  {
    return z;
  };				// Erro não tem acesso a z
};
