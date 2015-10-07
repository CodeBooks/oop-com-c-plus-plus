/** @copyright (C) Andre Duarte Bueno @file List-G-1-struct.cpp */
#include <iostream>
#include <string>

using namespace std;

/*	Uma struct é um conjunto da variáveis ou objetos reunidos.
	Os objetos que compõem a struct podem ser de diferentes tipos.
	No exemplo abaixo usa duas strings,mas poderia usar string para
	nome e int para matrícula.*/
struct SPessoa
{
  string nome;
  string matricula;
};

int main ()
{
  string linha =   "------------------------------------------------------------\n";

  cout << "Entre com o número de alunos da disciplina (ex =3):";
  int numeroAlunos;
  cin >> numeroAlunos;
  cin.get ();

  SPessoa professor;
  SPessoa aluno[numeroAlunos];

  cout << "Entre com o nome do professor: ";
  getline (cin, professor.nome);

  cout << "Entre com a matricula do professor: ";
  getline (cin, professor.matricula);

  for (int contador = 0; contador < numeroAlunos; contador++)
    {
      cout << "Aluno " << contador << endl;
      cout << "Entre com o nome do aluno: ";
      getline (cin, aluno[contador].nome);
      cout << "Entre com a matricula do aluno: ";
      getline (cin, aluno[contador].matricula);
    }

  cout << linha << "RELAÇÃO DE PROFESSORES E ALUNOS: \n" << linha;
  cout << "Nome do professor: " << professor.nome << "\n";
  cout << "Matricula : " << professor.matricula << "\n";
  for (int contador = 0; contador < numeroAlunos; contador++)
    {
      cout << linha << "Aluno " << contador << endl;
      cout << "Nome do aluno: " << aluno[contador].nome << endl;
      cout << "Matricula : " << aluno[contador].matricula << endl;
    }

  return 0;
}
