/** @copyright(C) Andre Duarte Bueno @file List-50-4-exemplo-thread-commoncpp.cpp */

#include <iostream>
#include <vector>
#include <cc++/thread.h>			// Inclui a biblioteca de threads do common c++

#ifdef	CCXX_NAMESPACES				// Define o uso dos namespaces std e ost 
using namespace std; 
using namespace ost;
#endif

/* Cria classe com nome MinhaClasseThread, herdeira de thread. 
Observe que os atributos comuns as threads são declarados como estáticos. 
Observe o uso do objeto Mutex */ 
class MinhaClasseThread: public Thread
{

private:
  static Mutex pi_lock;	

  int iproc;

public:
  static volatile double pi;

  static volatile int nproc;	

  static volatile double intervalos;	

protected:
  virtual void run();  				// Método com código paralelizado

public:

  // Construtor
  MinhaClasseThread(int _iproc = 0):iproc(_iproc)		
  {
    cout << "Construtor iproc = " << iproc << endl;
  }
};

Mutex MinhaClasseThread::pi_lock;		// Inicializa atributos estáticos da classe
volatile double  MinhaClasseThread::pi = 0;
volatile double  MinhaClasseThread::intervalos = 10;	
volatile int MinhaClasseThread::nproc;	

void MinhaClasseThread::run()			// Define método run (com código paralelizado)
{
  register double largura	=  1.0 / intervalos;	// Define a largura;
  register double parcial_pi = 0;

  for (register int i = iproc; i < intervalos;  i += nproc )
    {
      register double x = (i + 0.5) * largura;
      parcial_pi += 4.0 / (1.0 + x * x);
    }

  parcial_pi *= largura;
  pi_lock.enterMutex();				// Trava o bloco de código com o mutex
  pi += parcial_pi;				// Utiliza a variável  pi
  pi_lock.leaveMutex();				// Destrava
}

int main (int argc, char *argv[])
{
  if(argc <= 1)					// Verifica a entrada
    { 
      cout	<< "Uso: " << argv[0] << " númeroDeIntervalos númeroDeThreads " << endl ; 
      cout	<< "Exemplo: " << argv[0] << " 10 2 " << endl ;       
      return -1;
    }

  MinhaClasseThread::intervalos  = atof (argv[1]);
  MinhaClasseThread::nproc =  atoi (argv[2]);
  vector<MinhaClasseThread*> vthread;
  for(int i = 0; i < MinhaClasseThread::nproc ; i++)
    {
      // Cria as threads passando o iproc		
      MinhaClasseThread* T= new MinhaClasseThread(i);  	
      vthread.push_back( T );
    }

  for(int i = 0; i < MinhaClasseThread::nproc ; i++)
    vthread[i]->start();			// Executa as threads


  // Enquanto as threads estiverem rodando, realiza uma pausa na thread primária
  for(int i = 0; i < MinhaClasseThread::nproc ; i++)
    while (vthread[i]->isRunning())
      Thread::sleep(100);
  cout <<"Estimativa de pi é " << MinhaClasseThread::pi << endl;

  return 0;
}	
