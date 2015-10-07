/** @copyright (C) Andre Duarte Bueno @file List-26-2-interfaceShell.cpp */
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main (int argc, char *argv)
{

  // Lista dos arquivos com extensão jpg pode substituir por comando como find...

  system ("ls *.jpg > lixo");
  ifstream fin ("lixo");
  string arq;

  if (fin.good ())

    // Enquanto tiver algo no arquivo de disco, ler o nome do arquivo
    while (fin >> arq)
      {
	int posicao = arq.rfind ("jpg");// Determina posição do jpg
	ostringstream os;
	os << "convert " << arq;	// Início do comando "convert arq.jpg"
	arq.replace (posicao, 3, "ps");	// Substitui extensão jpg por ps
	os << " > " << arq;		// Fim do comando " > arq.ps"
	cout << os.str () << endl << endl;
	system (os.str ().c_str ());	// Executa o comando
      }

  // Elimina o arquivo lixo
  system ("rm -f lixo");
  return 0;
}
