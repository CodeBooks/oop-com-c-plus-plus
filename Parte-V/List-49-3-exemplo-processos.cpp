/** @copyright (C) Andre Duarte Bueno @file List-49-3-exemplo-processos.cpp*/
#include <unistd.h>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;

// Declara a função que tem código paralelizado (Determina os valores parciais de pi)
double process(int iproc,double intervalos,int nproc);

int main (int argc, char* argv[])
{
  double intervalos = atof (argv[1]);
  int nproc = atoi (argv[2]);
  int Fd[2];             			// Cria o identificador
  pipe (Fd);             			// Cria o pipe
  ifstream pipeIn;   				// Cria a stream de leitura
  ofstream pipeOut;  				// Cria a stream de escrita
  int iproc = 0 ;        			// Identificador do processo
  // O processo pai ( pid = 0 ) vai criar (nproc-1) processos
  int pid = 0;					// pid do processo
  for (int n = 0; n < (nproc - 1); n++)
    {
      if(pid == 0)				// Se for o processo pai
	{               
	  iproc++;         			// Incrementa o iproc
	  pid = fork ();  			// Cria o processo filho  
	}
    }
  if (pid == 0)					// Se for o processo pai pid == 0
    { 
      iproc = 0;
      double parcial_pi = process (iproc, intervalos, nproc);
      cout	<< "parcial_pi pai (iproc= " << iproc << ")= " << parcial_pi << endl;
      double pi = parcial_pi;			// Acumula valor do processo pai
      close (Fd[1]);				// Fecha o pipe
      pipeIn.attach (Fd[0]);			// Conecta para leitura
      for (int n = 0; n < (nproc - 1); n++)
	{
	  pipeIn >> parcial_pi;			// Lê valores enviados pelos filhos
	  pi += parcial_pi;			// Acumula 
	}
      pipeIn.close ();				// Fecha a conexão
      cout << "Valor estimado de pi = " << pi << endl;
    }
  else 						// Se for o processo filho 
    { 
      double parcial_pi = process ( iproc, intervalos, nproc);
      cout << "parcial_pi filho (iproc=" << iproc << ")=" <<  parcial_pi << endl;
      close (Fd[0]);          			// Fecha o pipe
      pipeOut.attach (Fd[1]); 			// Conecta para escrita
      pipeOut << parcial_pi << endl; 	 	// Escreve
      pipeOut.close ();       			// Fecha a conexão
    }
  return 0;
}

// Função process (com código paralelizado)
double process (int iproc, double intervalos, int nproc)
{
  register double largura	=  1.0 / intervalos;
  register double parcial_pi	= 0;
  for (register int i = iproc; i < intervalos; i += nproc )
    {
      register double x = (i + 0.5) * largura;
      parcial_pi += 4.0 / (1.0 + x * x);
    }
  parcial_pi *= largura;
  return (parcial_pi);
}
