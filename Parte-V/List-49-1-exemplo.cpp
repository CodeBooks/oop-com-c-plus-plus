/** @file List-49-1-exemplo.cpp */

#include <iostream> 
#include <cstdlib> 
#include <cstdio> 

int main( int argc, char *argv[] ) 
{   
  register int intervalos = atoi(argv[1]);		// Número de intervalos
  register double largura = 1.0 / intervalos;		// Largura   
  register double pi = 0;   

  for (register int i = 0 ; i < intervalos; ++i) 
    {     
      register double x = (i + 0.5) * largura;    
      pi += 4.0 / (1.0 + x * x);   
    }  
  pi *= largura; 

  std::cout	<< "Estimativa de pi é   " <<  pi << std::endl; 

  return(0); 
}
