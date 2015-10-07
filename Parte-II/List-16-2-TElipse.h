/** @copyright (C) Andre Duarte Bueno @file List-16-2-TElipse.h */

#ifndef TElipse_h
#define TElipse_h

#include "List-15-1-TCirculo.h"

class TElipse : public TCirculo	// Herança simples
{
 protected:
  int r2;
  
 public:

  // Construtor
  TElipse (int x, int y, int raio1, int raio2); 
  
  // Seta atributos do objeto 
  void Set (int x, int y, int raio1, int raio2);
  
  // Redefinida
  virtual void Desenha ();	
};
#endif
