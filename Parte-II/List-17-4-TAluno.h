#ifndef TAluno_h
#define TAluno_h

/** @copyright (C) Andre Duarte Bueno @file List-17-4-TAluno.h */
#include <fstream>
#include <string>

#include "List-17-2-TPessoa.h"

/* A classe TAluno é herdeira da classe TPessoa representa um aluno 
   da universidade. Redefine os métodos Entrada/Saida e adiciona o atributo iaa 
e os métodos Getiaa(), Setiaa(). */
class TAluno: /*virtual */ public TPessoa
{

 private:
  double iaa;
  static int numeroAlunos;
  static const std::string universidade;

 public:
    TAluno ();

    TAluno (const TAluno & obj);

    TAluno (std::string _nome, std::string _matricula, double _iaa = 0);

    virtual ~ TAluno ();

    virtual void Entrada ();

    virtual void Saida (std::ostream & os) const;

    double Getiaa () const
      {
	return iaa;
      }

    void Setiaa (double _iaa)
      {
	iaa = _iaa;
      }

    static int GetnumeroAlunos ()
      {
	return numeroAlunos;
      };

    static const std::string Getuniversidade ()
      {
	return universidade;
      };
};
#endif
