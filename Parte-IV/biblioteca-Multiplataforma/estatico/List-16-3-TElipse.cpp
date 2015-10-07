/** @copyright (C) Andre Duarte Bueno  @file  List-16-3-TElipse.cpp */
#include "List-16-2-TElipse.h"
#include <iostream>

//Construtor de TElipse, 
//observe que a chamada explicita do construtor da classe 
//base TCirculo é necessário porque TCirculo não tem um 
//construtor default e quero passar os atributos x,y e raio1
TElipse::TElipse (int x,int y, int raio1 ,int raio2)
  :TCirculo(x,y,raio1), r2(raio2)
{
}

void TElipse::Set (int x,int y, int raio1 ,int raio2)
{
  //herdou x e y de TPonto
  this->x = x; 
  this->y = y; 

  //herdou r1 de TCirculo
  r1 = raio1;

  //criou o atributo r2 na classe TElipse
  r2 = raio2;
}

void TElipse::Desenha()
{
  //Instrução para desenhar o circulo;
  TCirculo::Desenha();

  //Acrescenta coisas novas, 
  std::cout << "\nTElipse: Coordenada r2=" << r2 << std::endl;
}
/*
Observação:
Observe que o método Desenha de TElipse chama Desenha de TCirculo
e depois acrescenta coisas novas.
Isto é, o método Desenha da classe base é redefinido,
fazendo o que TCirculo::Desenha fazia e mais algumas coisa.
*/
