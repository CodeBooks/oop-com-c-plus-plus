/** @copyright (C) Andre Duarte Bueno @file List-13-1-ProgTPontoDinamico.cpp */

#include <iostream>

#include "List-11-5-TPonto.h"

// Exemplo de criação e uso do objeto TPonto
int main()
{
  int x = 5;
  int y = 4;

  TPonto *ptr = NULL;		// Cria ponteiro para objeto do tipo TPonto

  // Cria objeto do tipo TPonto, e coloca endereço em ptr. 
  ptr = new TPonto;             // Deveria testar a alocação
  
  ptr->Set(x, y);		// Chama método Set do objeto ptr
  ptr->Desenha();		// Chama método  Desenha
  int xx = ptr->Getx();

  return 0;
}
