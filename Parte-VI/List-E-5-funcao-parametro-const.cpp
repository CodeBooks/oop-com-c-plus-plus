/** @copyright (C) Andre Duarte Bueno @file List-E-5-funcao-parametro-const.cpp*/

#include <iostream>

using namespace std;

const double PI = 3.14159;		// Variáveis globais devem ser declaradas com maiúsculas

/*
Um programador C usaria
#define PI 3.14159
*/

//Função em linha
inline double VolumeEsfera (const double raio)	
{
  return 4.0 / 3.0 * PI * raio * raio * raio;
}

/*
Um programador C usaria uma macro, sem nenhuma verificação de tipo.
#define VolumeEsfera(raio) (4.0/3.0  * PI * raio * raio * raio) 
*/

int main ()
{
  double raio;

  cout << "Entre com o raio: ";
  cin >> raio;
  cin.get ();

  cout << "Raio r=" << raio << "  volume V= " << VolumeEsfera (raio) << endl;	//1

  return 0;
}
