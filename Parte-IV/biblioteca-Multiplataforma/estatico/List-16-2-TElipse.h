/** @copyright (C) Andre Duarte Bueno  @file  List-16-2-TElipse.h */
#ifndef _TElipse_
#define _TElipse_

#include "List-15-1-TCirculo.h"

//Herança simples
class TElipse:public TCirculo 
{
 public:
  int r2;

  //construtor
  TElipse (int x,int y, int raio1 ,int raio2); 

  //set
  void Set (int x,int y, int raio1 ,int raio2); 

  //redefinida
  virtual void Desenha (); 
};
#endif
