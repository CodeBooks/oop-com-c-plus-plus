/** @copyright (C) Andre Duarte Bueno @file List-15-2-TCirculo.cpp */

#include <iostream>

#include "List-15-1-TCirculo.h"

void TCirculo::Set (int x, int y, int raio)
{
  TPonto::Set (x, y);

  this->r1 = raio;
}

void TCirculo::Set (TPonto & p, int raio)
{
  x = p.Getx ();
  y = p.Gety ();
  r1 = raio;
}

void TCirculo::Set (TCirculo & c)
{
  this->x = c.x;
  this->y = c.y;
  this->r1 = c.r1;
}

// Utiliza o método Desenha da classe-base e acrescenta o desenho do círculo
void TCirculo::Desenha ()
{
  TPonto::Desenha ();		// Chama método da classe-base

  std::cout << "\nTCirculo: Coordenada r1=" << r1 << std::endl;
}
