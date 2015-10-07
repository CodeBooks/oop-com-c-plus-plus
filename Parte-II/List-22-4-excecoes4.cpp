/** @copyright (C) Andre Duarte Bueno @file List-22-4-excecoes4.cpp */

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class Teste
{
public:

  void f3 (int resp)
  {
    cout << "Início f3." << endl;
    if (resp == 1)
      throw (string ("Funcao 3"));
    cout << "Fim f3." << endl;
  }

  void f2 (int resp)
  {
    cout << "Início f2." << endl;
    f3 (resp);
    cout << "Fim f2." << endl;
  }

  void f1 (int resp)
  {
    cout << "Início f1." << endl;
    f2 (resp);
    cout << "Fim f1." << endl;
  }
};

int main ()
{
  int resp;

  cout << "\nDeseja executar sem exceção (0) ou com exceção (1):";
  cin >> resp;
  cin.get ();

  Teste obj;

  try
    {
      obj.f1 (resp);
    }
  catch (string s)
    {
      cout << "\nOcorreu Exceção na função :" << s << endl;
    }

  return 0;
}
