/** @copyright (C) Andre Duarte Bueno  @file  List-19-1-TPonto.h */
#ifndef _TPonto_
#define _TPonto_

#include <iostream>

//Define a classe TPonto, define o tipo de usuário TPonto.
class TPonto
{ 
 private:
  int x;
  int y; 
  static int contador; 

 public:
  //Construtor default
  TPonto() : x(0) , y(0)   { contador++; };   
  
  //Construtor sobrecarregado
  TPonto( int _x , int _y ) : x( _x ) ,y( _y )   { contador++; };
  
  //Construtor de cópia
  TPonto(const TPonto& p)
    { 
      x = p.x;
      y = p.y;
      contador++ ;
    }; 

  //Destrutor virtual
  virtual   ~TPonto()
    {
      contador--;
    };

  //Seta ponto
  inline void Set( TPonto& p ); 

  //Seta ponto
  inline void Set(int & x, int & y); 

  //Método inline, obtém x
  int Getx() const { return x; }; 

  //Método inline, obtém y
  inline int Gety()const; 

  //Método virtual, desenha o ponto
  virtual void Desenha(); 

  //Método Estático
  static int GetContador();

  //Declaração da sobrecarga de operadores unários como método membro
  inline TPonto& operator++(int); 
  inline TPonto& operator--(int); 
  inline TPonto& operator++(); 
  inline TPonto& operator--(); 

  //Declaração da sobrecarga de operadores binários como método membro
  inline TPonto& operator+(const TPonto& p2) const; 
  inline TPonto& operator-(const TPonto& p2) const; 
  inline TPonto& operator=(const TPonto& p2); 
  inline TPonto& operator+=(const TPonto& p2); 
  inline TPonto& operator-=(const TPonto& p2); 

  //Declaração da sobrecarga de operadores binários como função friend
  friend bool    operator==(const TPonto& p1,const TPonto& p2);
  friend bool    operator!=(const TPonto& p1,const TPonto& p2); 
  
  friend std::ostream& operator<<(std::ostream& out, const TPonto& p);
  friend std::istream& operator>>(std::istream& in, TPonto& p);
};
#endif

/*
Novidades:
----------
-Definição de operadores sobrecarregados, como o operador soma
TPonto& operator+  (TPonto& p2); 

-Sobrecarga como método membro e como função friend.
*/
