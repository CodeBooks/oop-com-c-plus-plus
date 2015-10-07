/** @copyright (C) Andre Duarte Bueno @file List-49-2-processos-exemplo.cpp*/

#include <unistd.h>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;

int main (void)
{
  int Fd[2];				// Cria o identificador 
  pipe (Fd);     			// Cria o pipe
  cout	<< "Fd[0]= " << Fd[0] << endl;
  cout	<< "Fd[1]= " << Fd[1] << endl;

  ifstream pipeIn;   			// Cria a stream de leitura
  ofstream pipeOut;  			// Cria a stream de escrita
  int pid;       			// O pid é usado para identificar se é pai ou filho

  pid = fork ();			// Cria processo filho (clone)

  // Aqui já temos 2 processos sendo rodados paralelamente
  if ( pid == 0 ) 			// se for o processo pai pid == 0
    {
      cout	<< "pid pai= " << pid  << endl;
      double entrada_double = 1.2;
      int entrada_int = 1;
      cout	<< "------Valor inicial " << endl;
      cout	<< "entrada_double= " << entrada_double << endl;
      cout	<< "entrada_int= " << entrada_int << endl;

      close (Fd[1]);			// Fecha o pipe
      pipeIn.attach (Fd[0]);  		// Conecta stream com pipe para leitura

      // Lê valores enviados pelo filho
      pipeIn >> entrada_double >> entrada_int;      
      cout	<< "------Valor final " << endl;
      cout	<< "entrada_double= " << entrada_double << endl;
      cout	<< "entrada_int= " << entrada_int << endl;
      pipeIn.close ();			// Fecha a conexão
    }

  else					// Se for um dos processos filho 
    {
      cout	<< "pid filho= " << pid  << endl;
      double saida_double = 2.4;
      int saida_int = 11;
      close (Fd[0]);			// Fecha o pipe
      pipeOut.attach (Fd[1]);		// Conecta para escrita e envia valores
      pipeOut << saida_double << " " << saida_int  << endl; 
      pipeOut.close ();			// Fecha a conexão
    }

  return 0;
}
