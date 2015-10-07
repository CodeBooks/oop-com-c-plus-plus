/*
  =========================================================================
  PROJETO:    Biblioteca LIB_LMPT
  Assunto/Ramo: TTeste...
  =========================================================================
  @author     André Duarte Bueno
  @file       TTeste.h
  @begin      Sat Sep 16 2000
  @copyright  (C) 2000 by André Duarte Bueno
  @email      bueno@lenep.uenf.br
*/

#include "config.h"

/** Definindo o namespace teste.
 * O mesmo é utilizado para agrupar as classes de teste...
 */
namespace teste {
  /**
   *  Classe de teste das diversas classes da LIB_LMPT.
   *  O objetivo é dentro da main criar e chamar TTeste
   *  que cria e chama as demais classes.
   *  
   *  Assunto:     Teste da LIB_LMPT
   *  Superclasse: TTeste
   *  @author      André Duarte Bueno
   *  @version     versão...
   *  @see	   veja assunto...
   */
  class TTeste
  {
  public:
    ///Construtor da classe TTeste.
    TTeste ()    {    };
    
    ///Destrutor da classe TTeste.
    virtual ~ TTeste ()    {    };
    
    /** Função principal, executada por main.
     * Vai solicitar ao usuário o tipo de objeto a ser criado,
     * criar o objeto e passar o controle
     * do programa para o objeto criado 
     * @param sem parâmetro
     * @return sem retorno.
     */
    void Run ();
  };
  
} //fim do namespace teste


