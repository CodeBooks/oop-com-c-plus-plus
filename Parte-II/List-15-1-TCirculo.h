/** @copyright (C) Andre Duarte Bueno @file List-15-1-TCirculo.h */

#ifndef TCirculo_h
#define TCirculo_h

#include "List-11-5-TPonto.h"

class TCirculo:public TPonto	// Define o tipo de usuário TCirculo.
{

 protected:
  int r1;

 public:

  // Construtor, observe que primeiro passa para o construtor da classe-base
  // os atributos x e y, e a seguir define r1.
  TCirculo (int _x, int _y, int _raio):TPonto (_x, _y), r1 (_raio)
    {
    };

  inline void Set (int x, int y, int raio);

  inline void Set (TPonto & p, int raio);

  inline void Set (TCirculo &);

  int Getr1 () const
    {
      return r1;
    };

  virtual void Desenha ();
};
#endif
