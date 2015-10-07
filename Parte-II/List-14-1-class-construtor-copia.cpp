/** @copyright (C) Andre Duarte Bueno @file List-14-1-class-construtor-copia.cpp */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*A classe TPessoa representa uma pessoa (um aluno ou um professor)
  de uma universidade. Tem um nome, uma matricula e um IAA (indice aproveitamento).
  E métodos básicos para entrada e saída de dados.
  Inclui construtor e destrutor (declarados e definidos dentro da classe).*/
class TPessoa
{

private:			// Acesso privado
  string nome;			// Atributo normal é criado para cada objeto
  string matricula;
  double iaa;

  static int numeroAlunos;	// Atributo estático é criado na classe

public:				// Acesso público (tendo um objeto pode acessar
                                // os métodos publicos)

                                // Construtor default, chamado automaticamente
                                // na contrução do objeto
  TPessoa ():iaa (0),nome(""),matricula("")
  {
    numeroAlunos++;
    cout << "Criou objeto " << numeroAlunos << " construtor default" << endl;
  }

  TPessoa (const TPessoa & obj)	// Construtor de cópia, cria uma cópia 
  {				// de um objeto existente 
    nome = obj.nome;
    matricula = obj.matricula;
    iaa = obj.iaa;
    numeroAlunos++;
    cout << "Criou objeto " << numeroAlunos << " construtor de cópia" << endl;
  }

  ~TPessoa ()			// Método Destrutor, chamada automaticamente 
  {				// na destruição do objeto
    numeroAlunos--;
    cout << "Destruiu objeto " << numeroAlunos << endl;
  }

  // Métodos do objeto, alteram os atributos do objeto e seu estado
  void Entrada ();

  void Saida (ostream & os) const;

  string Getnome () const
  {
    return nome;
  }

  string Getmatricula () const
  {
    return matricula;
  }

  double Getiaa () const
  {
    return iaa;
  }
  
  void Setiaa (double _iaa)
  {
    iaa = _iaa;
  }

  void Setnome (string _nome)
  {
    nome = _nome;
  }

  void Setmatricula (string _m)
  {
    matricula = _m;
  }

  // Métodos estaticos e públicos podem ser chamados sem um objeto e 
  // só podem manipular atributos static
  static int GetnumeroAlunos ()
  {
    return numeroAlunos;
  };
};

// A linha a seguir define (aloca memória) para o atributo numeroAlunos.
int   TPessoa::numeroAlunos = 0;

void TPessoa::Entrada ()
{
  cout << "Entre com o nome do aluno: ";
  getline (cin, nome);
  cout << "Entre com a matrícula do aluno: ";
  getline (cin, matricula);
  cout << "Entre com o IAA do aluno: ";
  cin >> iaa;
  cin.get ();
}

void      TPessoa::Saida (ostream & os) const 
{
  os << "Nome do aluno: " << nome << endl;
  os << "Matrícula: " << matricula << endl;
  os << "IAA: " << iaa << endl;
}

int main ()
{
  string linha = "-------------------------------------------------------\n";

  TPessoa professor;		// Cria um objeto do tipo TPessoa com nome professor

  cout << "Entre com o nome do professor: ";

  string nome;

  getline (cin, nome);		// Compare esta entrada com a do exemplo anterior

  professor.Setnome (nome);

  cout << "Entre com a matrícula do professor: ";
  string matricula;
  getline (cin, matricula);
  professor.Setmatricula (matricula);

  cout << "Entre com o número de alunos da disciplina (ex: 3): ";
  int numeroAlunos;
  cin >> numeroAlunos;
  cin.get ();


  // Cria vetor de TPessoa com nome aluno
  vector < TPessoa > aluno (numeroAlunos);

  for (int contador = 0; contador < aluno.size (); contador++)
    {
      cout << "Aluno " << contador << endl;
      aluno[contador].Entrada ();
    }

  cout << linha << "RELAÇÃO DE PROFESSORES E ALUNOS: \n" << linha;
  cout << "Nome do professor: " << professor.Getnome () << endl;
  cout << "Matrícula: " << professor.Getmatricula () << endl;
  for (int contador = 0; contador < aluno.size (); contador++)
    {
      cout << linha << "Aluno " << contador << endl;
      aluno[contador].Saida (cout);
    }

  cout << linha << "Número de alunos = " << TPessoa::GetnumeroAlunos () << endl;

  cout << linha << "chamando : TPessoa professor2(professor); " << endl;

  TPessoa professor2 (professor);
  professor2.Saida (cout);
  {
    cout << linha << "chamando: TPessoa professor3 = professor2;" << endl;

    // Uso do construtor de cópia pela atribuição
    TPessoa professor3 = professor2;
    professor3.Saida (cout);
  }				// <-Destrói professor3

  return 0;
}
