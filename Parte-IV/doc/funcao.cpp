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

namespace teste {
  /**
   * Classe de teste mostra exemplo de função documentada com fórmulas do latex.
   * @see http://www.stack.nl/~dimitri/doxygen/formulas.html
   */
  class TFuncao
  {
  public:
    /**
     * Com JAVA_DOC e LATEX é possível incluir fórmulas no meio do código,
     * o que é extremamente útil quando se trabalha com programas de engenharia,
     * matemática e física.   Veja um exemplo no formato utilizado pelo latex:
      \begin{equation}
      P_{c}=\frac{2(d-1)\sigma}{r_{m}}
      \end{equation}
      
      o mesmo exemplo é setado no JAVA_DOC de forma embutida usando  \f$ P_{c}=\frac{2(d-1)\sigma}{r_{m}} \f$

      ou em um parágrafo separado usando 
      \f[
      P_{c}=\frac{2(d-1)\sigma}{r_{m}}
      \f]
      
      A dica é criar a função usando o editor LyX, converter a mesma para o formato latex,
      copiar e colar no meio do código.
    */
    void funcao_exemplo(){};
  };
  
} //fim do namespace teste


