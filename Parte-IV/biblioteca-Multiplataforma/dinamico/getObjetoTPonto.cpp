#include "getObjetoTPonto.h"
#include "List-11-5-TPonto.h"
#include "List-15-1-TCirculo.h"
#include "List-16-2-TElipse.h"

TPonto * getObjetoTPonto(int selecao)
{
  //1- Crie um ponteiro para a classe base
  TPonto * ptr = 0; 
  
  switch(selecao)
    {
    case 1: ptr = new TPonto(1,2);          break;
    case 2: ptr = new TCirculo(1,2,3);      break;
    case 3: ptr = new TElipse(1,2,3,4);     break;
    default:ptr = new TCirculo(1,2,3);      break;
    }
  return ptr;
}
