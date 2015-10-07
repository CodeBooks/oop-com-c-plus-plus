/** @copyright (C) Andre Duarte Bueno @file List-6-2-cout-cin.cpp */

#include <iostream>

int main ()
{

  // Um int é um tipo predefinido, serve para armazenar números inteiros
  // Na linha a seguir o tipo do objeto é int e seu nome a
  int a;

  std::cout << "Entre com a: ";	// Escreve na tela "Entre com a:"
  std::cin >> a;		// Armazena o valor digitado no objeto a

  int b;

  std::cout << "Entre com b: ";
  std::cin >> b;
  
  // Observe que os objetos são declarados perto de onde eles começam a ser usados.
  int soma;
  
  // Verifica o tipo de a, o tipo de b, se compatíveis realiza a soma
  soma = a + b;

  // Escreve na tela o resultado de soma
  std::cout << "Soma = " << soma;
  
  // O comando std::endl envia para a tela um final de linha (linha nova)
  std::cout << std::endl;

  return 0;
}
