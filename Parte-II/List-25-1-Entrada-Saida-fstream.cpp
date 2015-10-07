/** @copyright (C) Andre Duarte Bueno @file List-25-1-Entrada-Saida-fstream.cpp*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
  {
    // Criamos o objeto fout e depois o ligamos a um arquivo de disco 
    ofstream fout; 
    
    // Associa o objeto fout ao arquivo data.dat
    fout.open ("data.dat");

    if (fout.fail ())
      {
	cout << "Não abriu o arquivo de disco." << endl;
	return 1;
      }
    fout << "Isto vai para o arquivo data.dat\n";
    fout.close ();		// Descarrega o buffer e fecha o arquivo.
  }

  {
    // Podemos criar o objeto e já ligá-lo a um arquivo de disco
    ofstream fout ("data2.dat");
    fout << "Isto vai para o arquivo data2.dat\n";
    fout.close ();		// Descarrega o buffer e fecha o arquivo.
  }

  {
    // Um ifstream é um fstream com ios::in, associa objeto fin ao arquivo data.dat
    ifstream fin ("data.dat");
    string s;
    getline (fin, s);		// Lê a string s do arquivo de disco data.dat
    cout << "Conteúdo do arquivo:" << s << endl;
    fin.close ();
  }

  {
    for (int i = 0; i < 3; i++)
      {
	ostringstream os;	// Cria objeto do tipo ostringstream 
	os << "nomeDoArquivo-" << i << ".dat";

	ofstream fout(os.str ().c_str ());

	fout << "no arquivo de disco: " << os.str () << endl;
	cout << "Escrevendo no arquivo de disco: " << os.str () << endl;
	fout.close ();
      }
  }

  return 0;

}
