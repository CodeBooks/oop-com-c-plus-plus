/** @copyright (C) Andre Duarte Bueno 
    @file List-25-3-Entrada-Saida-fstream-LeituraGravacaoDeObjetos.cpp */

#include <string>
#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

class Data			// Declara classe Data
{
  int x;
  int y;

public:

  Data ():x (0), y (0)  {  };

  friend istream  & operator	>> (istream &, Data &);
  friend ostream  & operator    << (ostream &, Data &);
  friend ifstream & operator	>> (ifstream &, Data * &);
  friend ofstream & operator	<< (ofstream &, Data * &);
};

istream & operator >> (istream & in, Data & d)
{
  cout << "\nx : ";
  in >> d.x;
  cout << "\ny : ";
  in >> d.y;
  return in;
}

ostream & operator << (ostream & out, Data & d)
{
  out << "(x = " << d.x;
  out << ",y = " << d.y << ")" << endl;
  return out;
}

ifstream & operator >> (ifstream & in, Data * &d)
{
  in.read (reinterpret_cast < char *>(d), sizeof (Data));
  return in;
}

ofstream & operator << (ofstream & out, Data * &d)
{
  out.write (reinterpret_cast < const char *>(d), sizeof (Data));
  return out;
}

int main ()
{
  cout << "Nome do Arquivo  : ";

  string nome_arquivo;

  getline (cin, nome_arquivo);

  ofstream fout (nome_arquivo.c_str ());	// Abre arquivo de disco

  if (!fout)			// Verifica se o arquivo foi aberto
    {
      cout << "\n\nErro na Abertura de arquivo";
      exit (1);
    }

  vector < Data > d;		// Cria vetor para objetos do tipo Data
  Data obj;			// Cria objeto do tipo Data com nome obj
  Data *pobj;                   // Cria ponteiro
  pobj = &obj;			// Lê atributos do objeto e armazena em obj

  cout << "Entre com os valores de x e y de cada objeto. "
       << "Para encerrar ctrl+d" << endl;
  while (cin >> obj)
    {
      cin.get ();
      fout << pobj;		// Armazena dados do objeto no arquivo de disco
      cout << "Objeto=" << obj;	// Mostra dados do objeto lido na tela
      d.push_back (obj);	// Armazena objeto no vetor
    };
  cin.clear ();			// Reseta a stream, deixando ok para próxima leitura
  fout.close ();		// Fecha o arquivo de disco

  cout << "\nMostrando objetos do vetor d \a" << endl;
  for (int i = 0; i < d.size (); i++)
    cout << d[i] << endl;	// Mostra todos os objetos lidos
  cout << "Vai ler os objetos do disco" << endl;

  ifstream fin (nome_arquivo.c_str ());

  if (!fin)
    {
      cout << "\n\nErro na Abertura de arquivo";
      exit (1);
    }

  vector < Data > d2;

  while (fin >> pobj)
    {
      d2.push_back (obj);        // d2.push_back (*pobj); 
    };
  fin.close ();

  cout << "\nMostrando objetos do vetor d2 \a" << endl;

  for (int i = 0; i < d2.size (); i++)
    cout << d2[i] << endl;

  return 0;
}
