#ifndef TPonto_h
#define TPonto_h

/** @copyright (C) Andre Duarte Bueno @file List-11-5-TPonto.h */
// Define a classe TPonto, o tipo de usuário TPonto.
class TPonto
{

 protected:
  int x;
  int y;
  static int contador;

 public:
  TPonto ():x (0), y (0)    
    {      
      contador++;    
    };
  TPonto (int _x, int _y):x (_x), y (_y)    
    {      
      contador++;    
    };

  // Seta ponto
  inline void Set (TPonto & p);

  inline void Set (int &_x, int &_y)
    {
      x = _x;
      y = _y;
    }

  // Método inline definido dentro da classe
  int Getx () const
  {
    return x;
  };

  // Método inline, declarado aqui, definido no arquivo cpp
  inline int Gety () const;

  // Método virtual, desenha o ponto
  virtual void Desenha ();

  // Método Estático 
  static int GetContador ();
};
#endif
