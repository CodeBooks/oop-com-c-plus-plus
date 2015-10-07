/** @copyright (C) Andre Duarte Bueno @file List-27-2-bitset1.cpp */
#include <bitset>
#include <iostream>

using namespace std;

int main ()
{

  const int size = 5;

  cout << "Cria objeto do tipo bitset com tamanho size e nome b." << endl;
  std::bitset < size > b;
  long unsigned int n = 2;

  cout << "Entre com o bit que deseja modificar n=";
  cin >> n;
  cin.get ();

  cout << "Seta o bit n=" << n << " para true -->";
  b.set (n);
  cout << b << endl;

  cout << "Seta o bit n=" << n << " para false-->";
  b.reset (n);
  cout << b << endl;

  cout << "Seta todos os bits para true-->";
  b.set ();
  cout << b << endl;

  cout << "Seta todos os bits para false-->";
  b.reset ();
  cout << b << endl;

  cout << "Inverte o bit n=" << n << "-->";
  b.flip (n);
  cout << b << endl;

  cout << "Inverte todos os bits-->";
  b.flip ();
  cout << b << endl;

  cout << "Usa método teste(n), com n=" << n;
  bool t = b.test (n);
  cout << " bool t = b.test(n); t= " << t << endl;

  cout << "Tamanho do bitset--> b.size()=" << b.size () << endl;
  cout << "Número de bits ativados b.count()=" << b.count () << endl;
  cout << "Retorna true se tem pelo menos 1 ativo b.any ()=" << b.any () << endl;
  cout << "Retorna true se todos inativos b.none()=" << b.none () << endl;

  cout << "Cria bitset b1 e b2 e faz b1[n] = 1;" << endl;
  std::bitset < size > b1;
  std::bitset < size > b2;
  b1[n] = 1;

  if (b1 == b2)
    cout << "b1 == b2" << endl;
  if (b1 != b2)
    cout << "b1 != b2" << endl;

  cout << "Realiza um AND bit a bit e armazena em b1" << endl;
  b1 &= b2;

  cout << "Após b1 &= b2;" << endl;
  cout << "b1-->" << b1 << " b2-->" << b2 << endl;

  cout << "Realiza um OR bit a bit e armazena em b1" << endl;
  b1[1] = 1;
  b1 != b2;

  cout << "Após b1 != b2;" << endl;
  cout << "b1-->" << b1 << " b2-->" << b2 << endl;

  cout << "Realiza um XOR bit a bit e armazena em b1" << endl;
  b1 ^= b2;

  cout << "Após b1 ^= b2;" << endl;
  cout << "b1-->" << b1 << " b2-->" << b2 << endl;

  cout << "Rotaciona b1 para direita n posições (todos os bits). ";
  cout << "Os bits iniciais assumem 0." << endl;
  b1.reset ();
  b1[n] = 1;
  b1 >>= n;

  cout << "Após b1[n] = 1; e b1 >>= n;" << endl;
  cout << "b1-->" << b1 << " b2-->" << b2 << endl;

  cout << "Rotaciona b1 para esquerda n posições. Os bits finais assumem 0."  << endl;
  b1 <<= n;

  cout << "Após  b1 <<= n , b1-->" << b1 << endl;

  return 0;
}
