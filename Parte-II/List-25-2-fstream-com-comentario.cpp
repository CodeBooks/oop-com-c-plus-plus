/** @copyright (C) Andre Duarte Bueno @file List-25-2-fstream-com-comentario.cpp*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
  {
    // Cria arquivo de disco e armazena dados com comentários
    ofstream fout;
    fout.open ("data.dat");

    // valor #comentários
    fout << 1452 << " # representa bla..bla..bla..1" << endl;
    fout << 0.123 << " # representa bla..bla..bla..2" << endl;
    fout << "msg" << " # representa bla..bla..bla..3" << endl;

    // valor # valor # valor #
    fout << 12 << " # " << 13 << " # " << 14 << " # " << endl;
    fout.close ();
  }
  {

    // Lê os dados do arquivo de disco
    ifstream fin ("data.dat");
    int x;
    float y;
    string s;
    int a1, a2, a3;

    fin >> x;
    fin.ignore (255, '\n');

    fin >> y;
    fin.ignore (255, '\n');

    fin >> s;
    fin.ignore (255, '\n');
    cout << "x = " << x << " y = " << y << " s = " << s << endl;

    fin >> a1;
    fin.ignore (255, '#');

    fin >> a2;
    fin.ignore (255, '#');

    fin >> a3;
    fin.ignore (255, '#');
    cout << "a1 = " << a1 << " a2 = " << a2 << " a3 = " << a3 << endl;
    fin.close ();
  }

  return 0;
}
