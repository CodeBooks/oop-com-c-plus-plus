/** @copyright (C) Andre Duarte Bueno  @file  List-11-5-TPonto.h */
#ifndef _TPonto_
#define _TPonto_

//Define a classe TPonto, o tipo de usuário TPonto.
class TPonto
{ 
  //------------------------------------Atributos
  //controle de acesso
 protected: 
  
  //atributos de objeto
  int x;    
  int y; 
  
  //atributo de classe
  static int contador; 
  
  //------------------------------------Métodos 
 public:
  
  //Construtor default
  TPonto() : x(0) , y(0)  { contador++; };   
  
  //Construtor sobrecarregado
  TPonto( int _x , int _y ) : x(_x) , y(_y)   { contador++; };
  
  //Construtor de cópia
  TPonto( const TPonto& p )
    {
      x = p.x;
      y = p.y;
      contador++ ;
    }; 
  
  //Destrutor virtual
  virtual   ~TPonto()  {contador--;};
  
  //Seta ponto
  inline void Set( TPonto& p ); 
  inline void Set( int& _x, int& _y ) 
    {
    x = _x;
    y = _y;
    }

  //Método inline definido dentro da classe
  int Getx() const { return x; }; 
  
  //Método inline, declarado aqui, definido no arquivo cpp
  inline int Gety() const; 
  
  //Método virtual, desenha o ponto
  virtual void Desenha(); 
  
  //Método Estático e const
  static int GetContador();
};
#endif
