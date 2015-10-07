/** @copyright (C) Andre Duarte Bueno @file List-E-4-funcao-retorno-void.cpp*/
#include <iostream>

using namespace std;

void f ();			// C++
void g (void);			// C precisa do segundo void

int main ()
{
  cout << "\a\n";
  cout << "Executar f() ou g() ?";
  char resp = 'f';
  cin >> resp;
  cin.get ();			// Pega o enter
  if (resp == 'f' || resp == 'F')
    f ();
  else if (resp == 'g' || resp == 'G')
    g ();
  else
    {
      cout << "Seleção errada, selecionou (" << resp << ")" << endl;
      main ();			// Recursão
    }
  return 0;
}

void f ()
{
  cout << "Função void não retorna nada (selecionou f)" << endl;
}

void g (void)
{
  cout << "Função void não retorna nada (selecionou g)" << endl;
}
