/** @copyright (C) Andre Duarte Bueno @file List-14-2-ObjDinamico.cpp */
#include <iostream>

using namespace std;

class TVetor
{
  
public:
  int dimensao;
  int *ptr_v;

  void Mostra ();

  // Construtor
  TVetor (int n = 10):dimensao (n)
  {
    ptr_v = NULL;
    ptr_v = new int (dimensao);
    if (ptr_v == NULL)
      {
	cerr << "\nFalha alocação" << endl;
	exit (0);
      }
    for (int i = 0; i < dimensao; i++)
      ptr_v[i] = i;
  }
  
  // Destrutor
  virtual ~ TVetor ()
  {
    cout << "destrutor do vetor: " << endl;
    delete[]ptr_v;
  }
};

void TVetor::Mostra ()
{
  for (int i = 0; i < dimensao; i++)
    cout << " " << ptr_v[i] << " ";
  cout << endl;
}

int main ()
{
  // Cria objeto do tipo TVetor, com nome v1
  TVetor v1 (5);
  
  cout << "Saída de v1.Mostra()" << endl;
  
  v1.Mostra ();
  
  // Aqui, v1.dimensao = 5, v1.ptr_v = &ptr_v[0]
  {
    // Cria v2, uma cópia de v1
    TVetor v2 = v1;
    cout << "Saída de v2.Mostra() após TVetor v2 = v1" << endl;
    v2.Mostra ();
    // Aqui, v2.dimensao = 5, v2.ptr_v = 1232
  }
  
  // Neste ponto, v2 foi deletado, pois saiu de escopo, 
  // Agora, v1.dimensao=5, v1.ptr_v = &ptr_v[0]
  // mas no endereço &ptr_v[0] não existe mais um objeto.
  cout << "Saída de v1.Mostra() após deleção de v2" << endl;
  v1.Mostra ();
  
  return 0;
}
