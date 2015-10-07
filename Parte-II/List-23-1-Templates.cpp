#include <iostream>

using namespace std;

// Função Template recursiva
template<int N>   
void f()
{
  f<N-1>(); // recursão
  cout << "N=" << N << endl;
}

// Especialização para int == 0
template<>        
void f<0>() 
{
  cout << "N=" << 0 << endl;
}


int main()
{
  f<10>(); // cria instância da função template com N=10

  return 0;
}
