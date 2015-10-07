/** @copyright (C) Andre Duarte Bueno @file List-7-1-tipos.cpp */

int main ()
{
  // Tipos-padrão da linguagem

  // Tipo booleano, intervalo 0 ou 1 (1 byte)
  bool flag = 0;

  // Tipo char, intervalo -128 -> +127 (1 byte)
  char ch = 'b';

  // Tipo int, intervalo  -2147483648 -> +2147483648 (4 bytes, 32 bits)
  int int_x = 777;

  // Tipo float, intervalo +/- 3.4.e+/-38 (7 dígitos de precisão) (4 bytes)
  float float_y = 3.212f;

  // Tipo double, intervalo +/- 1.7e+/-308 (15 dígitos de precisão) (8 bytes)
  double double_z = 12312.12312e5;

  // Tipo long double, intervalo +/- 3.4e+/-4932 (18 dígitos de precisão) (10 bytes)
  long double long_double_r = 1.2e-18;

  return 0;
}
