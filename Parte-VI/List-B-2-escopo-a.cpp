/** @copyright (C) Andre Duarte Bueno @file List-B-2-escopo-a.cpp */
// Declara que existe uma funcao1, que é definida em outro arquivo

extern void funcao1();

int x1 = 1;			// Cria variável global, do tipo int, com nome x1

static int x3 = 7;		// Cria variável x3, visível somente neste arquivo, 
				// permanente e global
int main()
{
  int x1 = 11;			// Cria um novo x1, visível dentro de main()

  float y1 = 44;		// y1 é visível dentro de main(), é temporária

  for (int i = 0; i < 5; i++)	// Cria um bloco for
    {
      float z1, x1;		// Cria z1 e x1, do tipo float, visíveis 
                                // dentro do for, e temporárias

      /* Existem três x1, um global, um de main, e um do for. Este é do for */
      x1 = 111.0;
      z1 =::x1;			// Com o operador de escopo (::)

      // acessa x1 de main(), logo  z1 = 11
      z1 = y1;
    }				// destrói x1 e z1 do for

  /* y1 = z1; Erro z1 indefinido fora do bloco do for */

  // Chama funcao1, definida em outro arquivo
  funcao1();
}				// Destrói x1 definido no bloco de main().
				// x1 global será destruída quando o programa for encerrado.
