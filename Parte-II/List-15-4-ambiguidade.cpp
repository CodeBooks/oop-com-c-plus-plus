/** @copyright (C) Andre Duarte Bueno @file List-15-4-ambiguidade.cpp */
// Cuidado com Inicializadores
class X
{

  int x;

public:			// Sejam os construtores: 
  X ()
  {
  };				// Construtor1 (default)

  X (int _x = 0)
  {
    x = _x;
  };				// Construtor2 (sobrecarregado)
};

int main ()
{				// Se na tentativa de criar um objeto você faz:
  X obj1 (5);			// Cria objeto 1, usa construtor2
  X obj2;			// Ambigüidade, qual construtor? X() ou X(int _x=0)

  return 0;
};
