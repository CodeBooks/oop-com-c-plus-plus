/** @copyright (C) Andre Duarte Bueno  @file  List-15-1-TCirculo.h */
#ifndef _TCirculo_
#define _TCirculo_

#include "List-11-5-TPonto.h"

//Define o tipo de usuário TCirculo.
class TCirculo :  public TPonto 
{
 public:
  int r1;

  //Construtor
  //Observe que primeiro passa para o construtor da classe base
  //os atributos x e y, e a seguir define r1.
  TCirculo(int _x,int _y, int _raio):TPonto(_x,_y),r1(_raio)
    {      }; 

  //sobrecarga
  inline void Set(int x,int y, int raio); 

  //sobrecarga
  inline void Set(TPonto & p, int raio); 

  //sobrecarga
  inline void Set(TCirculo & ); 

  //Método novo, retorna o raio do circulo
  int Getr1()const {return r1;};

  //Método redefinido
  virtual void Desenha(); 
};
#endif
