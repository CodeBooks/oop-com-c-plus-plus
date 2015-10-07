/**
 * \defgroup variaveis_globais
 * Define grupo de variáveis globais.
 * As mesmas são incluídas dentro do bloco.
 */
//@{ 

///variável global v1
int v1;

int v2;///<variável global v1

//@} 


/// @ingroup global
/// Informa que a variável abaixo pertence ao grupo de variáveis globais.
/// mesmo estando fora do bloco.
extern int VarInA;

/**
 * Define um grupo com nome funcoes_globais, onde vai armazenar funções globais.
 * @defgroup funcoes_globais
 */

///Documentação da função funcao_global
///@ingroup funcoes_globais
void funcao_global();
