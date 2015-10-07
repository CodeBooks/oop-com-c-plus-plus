#ifndef List-16-5-TCirculoElipse_h
#define List-16-5-TCirculoElipse_h
/** @copyright (C) Andre Duarte Bueno @file List-16-5-TCirculoElipse.h */

#include <iostream>

using namespace std;

#include "List-15-1-TCirculo.h"
#include "List-16-2-TElipse.h"

// Quero um circulo e uma elipse (um olho), as coordenadas do ponto central são as 
// mesmas. Herança múltipla, herda de TCirculo e de TElipse
class TCirculoElipse:public TCirculo, public TElipse
{

 public:

  TCirculoElipse (int xc, int yc, int rc, int r1e, int r2e);

  TCirculoElipse (TCirculo & circulo);	// Construtor de conversão

  inline void Set (int xc, int yc, int rc, int r1e, int r2e);

  virtual void Desenha ();	// Redefinida
};
#endif
