/** @copyright (C) Andre Duarte Bueno 
    @file List-11-3-class-atributo-metodo-const.cpp */

#include <iostream>
#include <iomanip>
#include <cstdlib>		// Funções srand() e rand()

using namespace std;

class TNumeroRandomico
{

private:
  double random;		// Atributo normal
  const int semente;		// Atributo constante

public:

  TNumeroRandomico (const int _semente = 1);

  double GetRandomNumber() const
  {
    return random;
  };

  const int Getsemente() const
  {
    return semente;
  };

  void Update();
};

// Construtor (Precisa inicializar o atributo constante)
TNumeroRandomico::TNumeroRandomico (const int _semente):  semente (_semente), random(0)
{
  srand (semente);
}

// Update gera um novo número randômico e armazena em random
void TNumeroRandomico::Update()
{
  random = rand();
}

int main()
{
  cout << "\nEntre com uma semente: ";
  int semente;
  cin >> semente;
  cin.get();

  TNumeroRandomico gerador(semente);

  cout << "Valor da semente: " << gerador.Getsemente() << endl;
  cout << "Valor inicial: " << gerador.GetRandomNumber() << endl;

  for (int i = 0; i < 5; i++)
    {
      gerador.Update();
      cout << "gerador.GetRandomNumber(" << setw(3) << i << ")=" << setw(15)
	<< gerador.GetRandomNumber() << endl;
    }

  return 0;
}
