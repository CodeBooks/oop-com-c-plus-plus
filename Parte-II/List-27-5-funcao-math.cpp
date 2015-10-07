/** @copyright (C) Andre Duarte Bueno  @file  List-27-5-funcao-math.cpp */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  cout
    << setiosflags( ios::fixed | ios::showpoint )<< setprecision( 1 )
    << "Raiz quadrada sqrt(700.0) = " << sqrt( 700.0 ) << "\n"
    << "Exponencial neperiana (e^x)  exp(1.0) = " <<setprecision(6)<< exp(1.0)<< "\n"
    << "logaritmo neperiano log(2.718282) = " << setprecision(1) << log(2.718282) << "\n"
    << "Logaritmo na base 10 log10(1.0) = " << log10( 1.0 )
    << ", log10(10.0) = " << log10( 10.0 ) << ", log10(100.0) = " << log10( 100.0 )<< "\n"
    << "Função valor absoluto, módulo fabs(13.5) = " << fabs( 13.5 )<< "\n"
    << ", fabs(0.0) = " << fabs( 0.0 ) << ", fabs(-13.5) = " << fabs( -13.5 ) << "\n"
    <<"Truncamento ceil(9.2) = " << ceil( 9.2 )<< ", ceil(-9.8) = " << ceil( -9.8 )<< "\n"
    <<"Arredondamento floor(9.2) = " << floor( 9.2 )
    << ", floor(-9.8) = " << floor( -9.8 ) << "\n"
    <<"Potenciação x^y pow(2.0,7.0) = "<< pow( 2.0, 7.0 )
    <<" fmod(13.675, 2.333) = "<< fmod( 13.675, 2.333 ) << setprecision( 1 )<< "\n"
    <<"Funções trigonométricas, sin,cos,tan"<<"\n"
    << "sin(0.0)= " << sin( 0.0 )<< ", cos(0.0)= " << cos( 0.0 )<< ", tan(0.0)= " << tan( 0.0 ) 
    << endl;
  
  return 0;
}
