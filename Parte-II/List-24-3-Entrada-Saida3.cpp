/** @copyright (C) Andre Duarte Bueno @file List-24-3-Entrada-Saida3.cpp */
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int i = 5;

  double d = 1.23456789;

  string nome = " Clube Palestra Itália - Palmeiras ";

  char letra = 'c';

  char cstring[] = "STRING_DE_C";

  cout << "-----------------Formato padrão----------------" << endl;
  cout << "int_i double_d string_nome char_c char*_cstring" << endl;
  cout << "-----------------------------------------------" << endl;

  cout << i << " " << d << " " << nome << ' ' << letra << " " << cstring <<    endl;

  cout << "Alinhamento a esquerda" << endl;
  cout.setf (ios::left);
  cout.width (10);
  cout << i << " ";

  cout << "\nAlinhamento a direita" << endl;
  cout.setf (ios::right);
  cout.width (10);
  cout << i << endl;

  cout << "Formato científico" << endl;
  cout.setf (ios::scientific);
  cout << d << endl;

  cout << "Mostra sinal positivo" << endl;
  cout.setf (ios::showpos);
  cout << d << endl;

  cout << "Maiúsculas" << endl;
  cout.setf (ios::uppercase);
  cout << nome << endl;

  cout << "Seta precisão numérica em 12" << endl;
  cout.precision (12);
  cout << d << endl;

  cout << "Seta espaço do campo em 20 caracteres, temporário" << endl;
  cout.width (20);
  cout << i << endl;

  cout << "Seta o caractere de preenchimento '#'" << endl;
  cout.fill ('#');
  cout.width (20);
  cout << i << endl;

  cout << "Escreve na tela 5 caracteres da cstring" << endl;
  cout.write (cstring, 5);
  cout << endl;

  cout << "Imprime a letra G na tela" << endl;
  cout.put ('G');
  cout << endl;

  cout << "Imprime a letra" << endl;
  cout << letra << endl;

  cout << "Imprime código ascii da letra" << endl;
  cout << (int) letra << endl;

  cout << "Imprime o número 12 em hexadecimal" << endl;
  cout << hex << 12 << endl;

  cout << "Parenteses evita ambigüidade, imprime \"9\"" << endl;
  cout << (5 + 4) << endl;

  cout << "Imprime string de C" << endl;
  cout << cstring << endl;
  cout.flush ();		// Utilizado para descarregar o buffer


  cout << "Usando boolalpha:   1 = " << boolalpha   << (bool)1 << endl;
  cout << "Usando noboolalpha: 1 = " << noboolalpha << (bool)1 << endl;

  cout << "Usando uppercase nome= " << uppercase   << "teste" << endl;
  
 return 0;
}
