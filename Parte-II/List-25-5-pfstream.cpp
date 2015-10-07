/** @copyright (C) Andre Duarte Bueno @file List-25-5-pfstream.cpp */

#include <iostream>
#include <cstdio>
#include <cmath>
#include <fstream>
#include <pfstream.h>

using namespace std;

int main ()
{
  // Cria arquivo de disco, onde irá armazenar dados
  ofstream fout ("data.dat");

  float x, y, z;

  // Armazena um conjunto de dados em disco
  for (x = -5; x <= 5; x += 0.1)
    {
      y = x * x * x - 1.5 * x * x + 7;
      z = x * sin (x);
      fout << x << "  " << y << "  " << z << endl;
    }
  fout.close ();

  // Executa o programa gnuplot
  opfstream gnuplot ("|gnuplot");	

  // Envia comando para o gnuplot
  gnuplot << "plot 'data.dat' using 1:2 title  'dados de y'  with linespoint"
	  << ", 'data.dat' using 1:3 title 'dados de z' with linespoint" << endl;
  cout << "\nPressione enter" << endl;
  cin.get ();
  
  // Encerra execução do gnuplot
  gnuplot.close ();		

  return 0;
}

/*
Dica sobre o gnuplot:
=====================
O comando plot vai plotar um gráfico, usando os dados do arquivo data.dat.
O termo  using 1:2 indica que o eixo de x é a primeira coluna e de y a 2 coluna
o titulo é definido por title  'dados de y'
o termo with linespoint indica que os pontos serão conectados por linhas e marcadores
*/
