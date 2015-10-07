/** @copyright (C) Andre Duarte Bueno @file List-24-0-locale.cpp */

#include <iostream>		// streans
#include <string>		// string de C++
#include <iomanip>

using namespace std;

/// Cria classe para visualização, ajuste e teste do locale
class TestandoLocale
{
 public:
  void Mostra();
  void Define();
  void Testa();

 private:
  locale  lc_usuario;          // o locale selecionado pelo usuário

public:

  // Construtor, seta atributos internos
  TestandoLocale()
  {
    // define locale do usuário  passando uma string vazia "".
    // O locale do usuário é definido em seu sistema operacional.
    lc_usuario      = locale("");       
  }
};

int main ()
{
  TestandoLocale localidade;            // Cria objeto
  localidade.Mostra();                  // Mostra alguns locales
  
  int continuar = 1 ;
  do
    {
      localidade.Define();              // Solicita e altera o locale
      localidade.Testa();               // Testa o locale selecionado
      cout << "\n\aTestar novo locale (1) ou sair (0) ?:";
      cin >> continuar ; cin.get();
    }
  while(continuar == 1);
  return 0;
}

/// Mostra algumas localidades padrões como C, POSIX, a localidade inicial,
/// e a localidade do usuário lc_usuario.name().
void TestandoLocale::Mostra()
{
  cout <<  "localidade_inicial = "      << locale().name() << endl; 
  cout <<  "localidade_padrao_C = "     << locale("C").name() << endl; 
  cout <<  "localidade_padrao_POSIX = " << locale("POSIX").name() << endl; 
  cout <<  "localidade_usuario = "      << lc_usuario.name() << endl; 
}

void TestandoLocale::Define()
{
  string nome_locale;

  // Solicita nome da localidade a ser utilizada
  cout <<  "Entre com o novo locale (ex: pt_BR, en_US, pt, fr, C): ";
  getline(cin,  nome_locale);

  // tenta definir novo locale a partir da entrada do usuário
  try
    {
      // define a localidade do usuário
      lc_usuario = locale (nome_locale.c_str());
      
      // define a localidade  global como sendo a do usuário
      locale::global( lc_usuario  ) ;
      
      // define a localidade de cin e cout
      cout.imbue (  lc_usuario  );  
      cin.imbue( lc_usuario  );
    }
  catch( ... )
    {
      cerr << "\n\a\aErro ao tentar definir novo locale, o locale->" << nome_locale 
	   << " deve ser inválido.\n";
    }
}

void TestandoLocale::Testa()
{
  double x = 1.234;
  cout << "Entre com x (ex:" << x << "):"; 
  cin >>  x; cin.get();
  cout << "x="<< setprecision (10) << x << endl;
}

