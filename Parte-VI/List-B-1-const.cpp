/** @copyright (C) Andre Duarte Bueno @file List-B-1-const.cpp */

#include <iostream>
#include <iomanip>

using namespace std;

// Criação de objeto constante (não pode mudar), global (visível em todo programa)
const double PI = 3.14159265358979;

int main ()
{
  // Criação de objeto constante (não pode mudar), local (visível dentro de main)
  const float PI = static_cast < float >(::PI);
  cout << setprecision (20) << "Conteúdo de PI local <float> = " << PI << endl;
  cout << setprecision (20) << "Conteúdo de PI global <double> = " << ::PI << endl;

  return 0;
}
