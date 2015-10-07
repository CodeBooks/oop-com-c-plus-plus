/** @copyright (C) Andre Duarte Bueno  @file  List-15-2-TCirculo.cpp */
#include <iostream>
#include "List-15-1-TCirculo.h"

//Implementação dos métodos de  TCirculo
void TCirculo::Set(int x,int y, int raio)
{
  TPonto::Set(x,y);
  this->r1 = raio;
}

void TCirculo::Set(TPonto&  p, int raio)
{
  //Set(p.x,p.y);
  this->x  = p.Getx();
  this->y  = p.Gety();
  r1 = raio;
}

void TCirculo::Set(TCirculo & c)
{
  this->x  = c.x;
  this->y  = c.y;
  this->r1 = c.r1;
}

//Implementação  de Desenha
//Usa o método desenha da classe base e acrescenta o desenho do circulo
void TCirculo::Desenha()
{
  //chama função da classe base
  TPonto::Desenha();

  //instrução para desenhar o circulo;
  std::cout << "\nTCirculo: Coordenada r1=" << r1 << std::endl;
}


