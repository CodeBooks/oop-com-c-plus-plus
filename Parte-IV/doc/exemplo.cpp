///
///  =========================================================================
///  PROJETO:    Biblioteca LIB_LMPT
///  Assunto/Ramo: TExemplo2...
///  =========================================================================
///  \author     André Duarte Bueno
///  \file       TExemplo2.h
///  \begin      Sat Sep 16 2000
///  \copyright  (C) 2000 by André Duarte Bueno
///  \email      bueno@lenep.uenf.br


#include "config.h"

/// Definindo o namespace teste.
/// O mesmo é utilizado para agrupar as classes de teste...

namespace teste {
  
  ///  Classe de teste das diversas classes da LIB_LMPT.
  ///  O objetivo é dentro da main criar e chamar TExemplo2
  ///  que cria e chama as demais classes.
  ///  
  ///  Assunto:     Teste da LIB_LMPT
  ///  Superclasse: TExemplo2
  ///  \author      André Duarte Bueno
  ///  \version     versão...
  ///  \see	   veja assunto...
  class TExemplo2
  {
  public:
    ///Construtor da classe TExemplo2.
    TExemplo2 ()    {    };
    
    ///Destrutor da classe TExemplo2.
    virtual ~ TExemplo2 ()    {    };
    
    /// Função principal, executada por main.
    /// Vai solicitar ao usuário o tipo de objeto a ser criado,
    /// criar o objeto e passar o controle
    /// do programa para o objeto criado 
    /// \param sem parâmetro
     /// \return sem retorno.
     ///
    void Run ();
    int atributo1;///< comentário breve do atributo

    ///comentário breve.
    //// e detalhado do atributo2.
    int atributo2;
  };
  
} //fim do namespace teste


