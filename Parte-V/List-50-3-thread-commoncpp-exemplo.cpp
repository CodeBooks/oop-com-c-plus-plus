/** @file List-50-3-thread-commoncpp-exemplo.cpp */
// Fonte: Exemplo distribuído com a biblioteca common C++ (adaptado)

#include <cc++/thread.h>
#include <cstdio>
#include <cstring>
#include <iostream>

#ifdef	CCXX_NAMESPACES
using namespace std;	
using namespace ost;
#endif

class Thread_Filha:public Thread	// Classe thread filha
{

public:

  Thread_Filha ()  {  };                // Construtor

  void run ()				// Método com código paralelo
  { 
    cout	<< "Iniciando função run da thread filha.." << endl;
    Thread::sleep (3000);		// Pausa na thread filha
    cout	<< "..finalizando função run da thread filha" << endl;
  }

  void final ()                         // Método de finalização, herdado de Thread
  {
    delete this;
  }
};

class Thread_Pai:public Thread		// Classe thread pai
{

public:

  Thread_Pai () { };                    // Construtor

  void run ()				// Método com código paralelo
  {
    cout 	<< "Iniciando função run da thread pai "
		<< " vai criar e rodar a thread filha" 	<< endl;
    Thread *th = new Thread_Filha ();	// Cria thread filha 
    th->start ();			// Executa thread filha
    Thread::sleep (1000);		// Pausa na thread pai
    cout	<< "finalizando função run da thread pai" << endl;
  }

  void final ()
  {
    delete this;
    // Deleta memória para testar violação de acesso
    memset (this, 0, sizeof (*this));
  }
};

int main (int argc, char *argv[])
{
  cout	<< "Criando e rodando a thread pai" << endl;
  Thread_Pai *th = new Thread_Pai ();	// Cria a thread pai
  th->start ();				// Executa	 a thread pai
  Thread::sleep (10000);		// Pausa na thread pai
  return 0;
}
