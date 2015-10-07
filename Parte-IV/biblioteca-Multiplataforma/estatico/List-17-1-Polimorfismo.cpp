/** @copyright (C) Andre Duarte Bueno  @file  List-17-1-Polimorfismo.cpp */
#include <iostream>
#include "List-11-5-TPonto.h"
#include "List-15-1-TCirculo.h"
#include "List-16-2-TElipse.h"
using namespace std;

//Exemplo de criação e uso do objeto TPonto, TCirculo e TElipse
int main()
{
  //1- Crie um ponteiro para a classe base
  TPonto * ptr = NULL; 
  
  int selecao;
  //2- Pergunte para o usuário qual objeto deve ser criado
  do
    {
      cout << "\nQual objeto criar? ";
      cout << "\nTPonto................(1)";
      cout << "\nTCirculo..............(2)";
      cout << "\nTElipse...............(3)";
      cout << "\nPara sair 4?:";
      cin >> selecao;  cin.get();

      //3- Crie o objeto selecionado
      switch(selecao)
	{
	case 1: ptr = new TPonto(1,2);          break;
	case 2: ptr = new TCirculo(1,2,3);      break;
	case 3: ptr = new TElipse(1,2,3,4);     break;
	default:ptr = new TCirculo(1,2,3);      break;
	}
      
      //4- Agora você pode fazer tudo o que quiser com o objeto  criado.
      ptr->Desenha ();

      //....
      //ptr->outros métodos
      //....

      //5- Para destruir o objeto criado, use
      delete ptr; 
      ptr = NULL;
    } while ( selecao < 4 );
  return 0;
}

/*
Para compilar no GNU/Linux:
--------------------------
g++ List-17-1-Polimorfismo.cpp List-11-7-ProgTPonto.cpp List-15-2-TCirculo.cpp List-16-3-TElipse.cpp

Novidade:
--------
-Uso de polimorfismo
-Uso de estrutura de controle switch(){case i: break;}

Uma estrutura switch é usada para seleção de uma opção em diversas,
isto é, switch (opção). A opção a ser executada é aquela
que tem o case valor = opção.

Neste exemplo, se o valor selecionado pelo usuário for 1 executa a linha
  case 1: ptr = new TPonto(1,2);          break;

Se o valor de seleção não for nem 1, nem 2, nem 3,executa a opção default.
O break é utilizado para encerrar a execução do bloco switch.

 switch(selecao)
  {
  case 1: ptr = new TPonto(1,2);          break;
  case 2: ptr = new TCirculo(1,2,3);      break;
  case 3: ptr = new TElipse(1,2,3,4);     break;
  default:ptr = new TCirculo(1,2,3);      break;
  }

Saída:
------
[andre@mercurio Cap3-POOUsandoC++]# ./a.out 
Qual objeto criar? 
TPonto................(1)
TCirculo..............(2)
TElipse...............(3)
Para sair 4?:0

TPonto: Coordenada x=1
TPonto: Coordenada y=2
TCirculo: Coordenada r1=3

Qual objeto criar? 
TPonto................(1)
TCirculo..............(2)
TElipse...............(3)
Para sair 4?:1

TPonto: Coordenada x=1
TPonto: Coordenada y=2

Qual objeto criar? 
TPonto................(1)
TCirculo..............(2)
TElipse...............(3)
Para sair 4?:2

TPonto: Coordenada x=1
TPonto: Coordenada y=2
TCirculo: Coordenada r1=3

Qual objeto criar? 
TPonto................(1)
TCirculo..............(2)
TElipse...............(3)
Para sair 4?:3

TPonto: Coordenada x=1
TPonto: Coordenada y=2
TCirculo: Coordenada r1=3
TElipse: Coordenada r2=4

Qual objeto criar? 
TPonto................(1)
TCirculo..............(2)
TElipse...............(3)
Para sair 4?:4

TPonto: Coordenada x=1
TPonto: Coordenada y=2
TCirculo: Coordenada r1=3
*/
