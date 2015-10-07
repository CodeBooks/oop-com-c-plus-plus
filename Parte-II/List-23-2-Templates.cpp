#include <iostream>

using namespace std;

// A estrutura double_trait cria um typedef para o tipo T
template<class T>
struct double_trait
{
  typedef T T_double;
};

// Especialização da estrutura double_trait  para int
// Se o tipo T for int, T_double deve ser do tipo double
template<>
struct double_trait<int>
{
  typedef double T_double;
};

// Uma função template que usa a estrutura double_trait acima definida
template<class T>
typename double_trait<T>::T_double Media (const T* vetor, int numero_elementos)
{ 
  typename double_trait<T>::T_double soma = 0;
  for(int i=0; i < numero_elementos; i++)
    soma += vetor[i];

  return soma / numero_elementos;
}


// Usando 
int main()
{
  int* vetor_int = new int(4);

  for (int i = 0; i < 4; i++)
    vetor_int[i] = i;
  
  double media ;

  media = Media(vetor_int , 4);
  cout << "media vetor_int = " << media << endl;
 
  double* vetor_double = new double(4);

  for (int i = 0; i < 4; i++)
    vetor_double[i] = i;
  
  media = Media(vetor_double , 4);

  cout << "media vetor_double = " << media << endl;
  
  cout << "(int 3)/(int 2) = "<< 3/2 << endl;
  
  return 0;
}
