/** @copyright (C) Andre Duarte Bueno @file List-C-1-comparacao.cpp */
#include <iostream>
using namespace std;

bool compara (int a, int b);	// Função 

int main()
{
  int a, b;
  cout << "Entre com dois numeros inteiros (a espaço b enter): ";

  // Observe abaixo a leitura de duas variaveis em uma unica linha. 
  // Isto deve ser evitado.
  cin >> a >> b;
  cin.get();			// Pega o enter
  compara(a, b);
  a += 5;			// Operador composto.
  compara(a, b);
  b--;				// Operador de decremento.
  compara(a, b);
  a *= ++b;			// Operador de incremento.
  compara(a, b);
  return 0;
}

bool compara (int a, int b)
{
  if (a == b)			// Operador de comparação
    cout << a << " == " << b << "\t";
  if (a != b)
    cout << a << " != " << b << "\t";
  if (a < b)
    cout << a << " < " << b << "\t";
  if (a > b)
    cout << a << " > " << b << "\t";
  if (a <= b)
    cout << a << " <= " << b << "\t";
  if (a >= b)
    cout << a << " >= " << b << "\t";
}
