/** @copyright (C) Andre Duarte Bueno @file List-31-2-map2.cpp */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

class TTelefone				// Tipo telefone, armazena o prefixo e o número
{
private:
  int prefixo;
  int numero;

public:
  // Construtor
  TTelefone():prefixo(0),numero(0){};

  // Sobrecarga de streams como função friend
  friend istream& operator >> (istream& is,TTelefone& t);
  friend ostream& operator << (ostream& os, const TTelefone& t);
  friend ofstream& operator << (ofstream& os, const TTelefone& t);
};

istream& operator>>(istream& is, TTelefone& t)
{
  is	>> t.prefixo;
  is	>> t.numero; 
  return is;
}

ostream& operator<<(ostream& os, const TTelefone& t)
{
  os.setf(ios::left);
  os	<< "(" << t.prefixo << ")-" << t.numero << endl;
  return os;
}

ofstream& operator<<(ofstream& os,const TTelefone& t)
{
  os.setf(ios::left);
  os << t.prefixo <<' '<< t.numero << endl;
  return os;
}

int main()
{ 
  // Usa um typedef, um apelido para std::map usando string e TTelefone
  // A string é a chave e o TTelefone o valor.
  typedef std::map<string, TTelefone> container_map;
  container_map listatelefones;		// Cria container

  TTelefone telefone;

  int resp = 0;
  string linha ("----------------------------------------------------\n");
  do 
    {
      string nome;
      cout	<< "Entre com o nome da pessoa/empresa: ";
      getline(cin,nome);
      cout << "Entre com o telefone (prefixo numero)"
	   << "(ctrl+d para encerrar entrada):" << endl;
      cin >> telefone;      cin.get();

      // Observe a inserção da chave (o nome) e do valor (o telefone).
      if(cin.good())
	listatelefones.insert (container_map::value_type(nome, telefone));
    } while (cin.good() );
  
  cin.clear();
  cout	<< linha << "Conteúdo do container:\n" << linha <<  endl;
  cout	<< "Chave		valor" << endl;
  
  // saída para tela
  cout.setf(ios::left);
  container_map::const_iterator iter;  
  for (iter = listatelefones.begin(); iter != listatelefones.end(); ++iter)
    {
      cout	<< setw(5) << iter->first <<' ';
      cout	<< iter->second;
    }
  
  ofstream fout("Lista_telefones_map.dat");
  if(fout)
    {
      for(iter = listatelefones.begin(); iter != listatelefones.end(); ++iter )
	fout <<  iter->first <<' ' <<   iter->second ;
      fout.close();
    }
  cout	<< endl;
  return 0;
}
