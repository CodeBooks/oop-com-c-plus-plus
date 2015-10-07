/** @copyright (C) Andre Duarte Bueno  @file  List-19-2-TPonto.cpp */
#include <iostream>
#include "List-19-1-TPonto.h"

//Definição de atributo estático da classe
int TPonto::contador = 0;

//Seta valores de x,y , usando ponto p
void TPonto::Set( TPonto& p )
{ 
  x = p.x; 
  y = p.y;
}

//Seta os valores de x e y do objeto, usando os valores de x e y passados como parâmetro
//Como recebe x e y, e dentro da classe também tem um x e um y
//usa o ponteiro this para diferenciar x do objeto do x parâmetro
void TPonto::Set(int & x, int & y)
{
  this->x = x; //uso de this 
  this->y = y; 
}

//Método get não muda o objeto, sendo declarado como const
int TPonto::Gety() const
{
  return y;
}

//Método estático da classe, pode ser chamado sem um objeto
int TPonto::GetContador()
{
  return contador;
}

//Método virtual
void TPonto::Desenha()
{
  std::cout << "\nTPonto: Coordenada x=" << x;
  std::cout << "\nTPonto: Coordenada y=" << y << std::endl;
}

//-------------------------------------------Definição dos Métodos sobrecarregados
//Definição da sobrecarga do operador ++
//Simplesmente incremento x e y
TPonto& TPonto::operator++(int)
{
  this->x++;
  this->y++;
  return *this;
}

TPonto& TPonto::operator++()
{
  this->x++;
  this->y++;
  return *this;
}

//Definição da sobrecarga do operador --
//Simplesmente decremento x e y
TPonto& TPonto::operator--(int)
{
  this->x--;
  this->y--;
  return *this;
}

TPonto& TPonto::operator--()
{
  this->x--;
  this->y--;
  return *this;
}

//Definição da sobrecarga do operador +
TPonto& TPonto::operator+(const TPonto& p2) const
{
  TPonto *p3 = new TPonto;
  p3->x = this->x +  p2.x;  
  p3->y = this->y +  p2.y; 
  return *p3;
}

//Definição da sobrecarga do operador -
TPonto& TPonto::operator-(const TPonto& p2) const
{
  TPonto* p3 = new TPonto;
  p3->x = this->x -  p2.x; 
  p3->y = this->y -  p2.y; 
  return *p3;
}

//Definição da sobrecarga do operador =
TPonto& TPonto::operator=(const TPonto& p2)
{
  this->x = p2.x;   
  this->y = p2.y;
 return *this;
}

//Definição da sobrecarga do operador +=
TPonto& TPonto::operator+=(const TPonto& p2)
{
  this->x +=  p2.x; 
  this->y +=  p2.y; 
  return *this;
}

//Definição da sobrecarga do operador -=
TPonto& TPonto::operator-=(const TPonto& p2)
{
  this->x -=  p2.x; 
  this->y -=  p2.y; 
  return *this;
}

//-----------------------Definição das funções sobrecarregadas
//Definição da sobrecarga do operador ==
bool operator==(const TPonto& p1,const TPonto& p2)
{
  return  (p1.x == p2.x) && (p1.y == p2.y);
}

//Definição da sobrecarga do operador !=
bool operator!=(const TPonto& p1,const TPonto& p2)
{
  return ! (p1 == p2 );
}

//Definição da sobrecarga do operador <<
std::ostream& operator<<(std::ostream& out,const TPonto& p)
{
  out << "(" << p.x << "," << p.y << ")";
  return out;
}

//Definição da sobrecarga do operador >>
std::istream& operator>>(std::istream& in,TPonto& p)
{ 
  in >>  p.x;
  in >>  p.y;
  return in;
}

