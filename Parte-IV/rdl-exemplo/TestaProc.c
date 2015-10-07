#include <dlfcn.h>
#include <stdio.h>
int main()
{
  void *descritor;
  void (*PonteiroParaMinhaProcSoma)( int a, int b);  
  int (*PonteiroParaMinhaFuncMaiorValor)( int a, int b);
  int x, y, MaiorValor;
  x = 10; /* Somente para exemplo */
  y = 11; /* Somente para exemplo */
  /* Abre a biblioteca compartilhada */
  if ( descritor = dlopen("MinhaLib.so.1",RTLD_LAZY))
    /*  if ( descritor = dlopen("/usr/local/lib/libMinhaLib.so.1",RTLD_LAZY))*/
  {
    PonteiroParaMinhaProcSoma = dlsym(descritor,"MinhaProcSomal");
    PonteiroParaMinhaFuncMaiorValor =  dlsym(descritor,"MinhaFuncMaiorValor");
    /* Chamada a MinhaProcSoma */
    (*PonteiroParaMinhaProcSoma)( 2, 4 );
    (*PonteiroParaMinhaProcSoma)( x, y );
    /* Chamada a MinhaFuncMaiorValor */
    MaiorValor = (*PonteiroParaMinhaFuncMaiorValor)(x,y);
    printf("\nO Maior valor é: %d", MaiorValor);
  }
  else
  {
    printf("\nErro ao tentar usar a biblioteca dinâmica\n");
    printf("\n%s\n",dlerror() );
    return 0;
  }
}
