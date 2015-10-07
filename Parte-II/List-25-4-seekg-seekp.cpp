/** @copyright (C) Andre Duarte Bueno @file List-25-4-seekg-seekp.cpp */

#include <iostream>
#include <fstream>

using namespace std;

class A
{

public:
  A ():x (0), y (0)  {  };

  int x;
  int y;

  bool Input ()
  {
    cout << "Entre com x e y (x espaço y):";
    cin >> x;
    cin.get ();
    cin >> y;
    cin.get ();
    if (cin.fail ())
      {
	cin.clear ();
	return 0;
      }
    return 1;
  }
};

// Armazena objetos em disco
void Armazena_objetos ()
{
  cout << "sizeof(A)=" << sizeof (A) << endl;
  A obja;
  ofstream fout ("readwrite.dat", ios::binary);

  if (!fout)
    {
      cout << "Não consegue abrir arquivo de disco";
      return;
    }

  while (obja.Input ())
    {
      cout << " obja.x= " << obja.x << " obja.y= " << obja.y << endl;
      fout.write (reinterpret_cast < char *>(&obja), sizeof (A));
    }

  fout.close ();
}

void Le_objetos ()
{
  A obja;
  cout << "\nQual objeto quer ler?";
  int i;
  cin >> i;
  cin.get ();
  
  // Cria objeto fin, que aponta para arquivo readwrite.dat
  ifstream fin ("readwrite.dat", ios::binary);
  if (!fin)
    {
      cout << "Não consegue abrir arquivo de disco";
      return;
    }

  // Vaí até a posição inicial do objeto i no disco
  fin.seekg (i * sizeof (A), ios::beg);

  // Lê o objeto i, usando método read
  fin.read (reinterpret_cast < char *>(&obja), sizeof (A));
  fin.close ();
  
  // Mostra atributos do objeto lido
  cout << " obja.x= " << obja.x << " obja.y= " << obja.y << endl;
}

int main ()
{

  Armazena_objetos ();

  Le_objetos ();

  return 0;
}
