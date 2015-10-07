/** @copyright (C) Andre Duarte Bueno @file List-33-2-generic.cpp */
#include <iostream>                             // Entrada e saída de dados
#include <iomanip>                              // Manipuladores
#include <string>                               // Strings de C++
#include <vector>				// Classe de vetores
#include <algorithm>				// Classe para algoritmos genéricos
#include <memory>                               // destroe e construct
#include <cstdlib>                              // função rand
#include <numeric>                              // inner_product

using namespace std;				// Define o uso do espaço de nomes std

/** Classe para teste dos algoritmos genericos */
class TesteFuncoesGenericas
{
public:
  // Atributos
  vector <int> v, v2, v3;

  // Métodos
  TesteFuncoesGenericas()
  {
    //    v.resize(10); // redimensiona o vetor v
    // Preenche(v);  // preenche o vetor v com valores de 0 a 9
    // v3 = v2 = v;
  }

  void EntradaUsuario(  vector <int>& vetor );
  void Preenche(  vector <int>& vetor );
  bool run();
};

// Solicita valores do vetor
void TesteFuncoesGenericas::EntradaUsuario(  vector <int>& vetor )
{
  vetor.clear();                                // zera o vetor
  int data;
  do	
    {
      cout << setw(30) << "Entre com o dado (" << setw (3) << vetor.size () << ")(ctrl+d encerra entrada):";
      cin >> data;
      cin.get();
      if(cin.good())
	vetor.push_back(data);
    } while ( cin.good());
  cin.clear(); 					// Reseta objeto cin para estado ok
}

// Preenchendo o vetor com uma sequência
void TesteFuncoesGenericas::Preenche(  vector <int>& vetor )
{
  vetor.clear();
  for (int i = 0; i < 5 /*vetor.size()*/; i++)
    vetor.push_back(i);
}

// Declaração e definição da sobrecarga de << 
ostream & operator<< ( ostream & os , const vector < int >&v)
{
  for (int i = 0; i < v.size() ; i++)
    os << setw (5) << setfill(' ') << v[i] << '\t';
  return os;
}

bool TesteFuncoesGenericas::run()
{
  char * vs[] = { "advance", "next_permutation","random_shuffle","reverse","rotate","accumulate","adjacent_difference",
		"sort","binary_search","includes","set_union","set_intersection","set_difference",
		  "set_symmetric_difference","minus","plus","multiplies","inner_product","generate",  "Mostra vetor", 
		  "", "", "", "", "","", "", "", "", // inclua aqui seus exemplos
		  "sair do programa"}; //30
  vector<string> funcoes;
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
  cout << "====================================================================" << endl
       << "================= Qual função deseja testar ??? ====================" << endl
       << "====================================================================" << endl;
  for (int i = 0; i < 30 ; i++ )
    { 
      funcoes.push_back(vs[i]); 
      if(funcoes[i] != "")
	cout << funcoes[i] << setw(50 - funcoes[i].size()) << setfill('.') << i << endl;
    }
  int selecao;
  cin >> selecao; cin.get();
  if(selecao >= funcoes.size()) return 0;

  Preenche(v);
  v3 = v2 = v;

  cout << setfill(' ') << setw(30) << "Vetor  v= " << v << endl;  

  if(funcoes[selecao]=="advance")
    {
      cout << "A partir da posição 0, devo avançar quantas casas (maximo=" << v.size() << "):";
      int n;
      cin >> n; cin.get();
      vector<int>::iterator it = v.begin();
      advance (it, n);
      cout << "o iterador aponta agora para o elemento na posição " 
	   << (it -v.begin()) << " com o valor " << *it << endl; 
    }
  if(funcoes[selecao]=="next_permutation")
    {
      for(int i = 0; i <  v.size() * v.size(); i++)
	{
	  next_permutation(v.begin(),v.end());
	  cout << setw(30) << "Vetor  v após next_permutation= " << v << endl; 
	}
    }  
  if(funcoes[selecao]=="random_shuffle")
    {
      for(int i = 0; i <  v.size(); i++)
	{
	  random_shuffle(v.begin(),v.end());
	  cout << setw(30) << "Vetor  v após random_shufle= " << v << endl; 
	}
    }  

  if(funcoes[selecao]=="reverse")
    {
      reverse(v.begin(), v.end());
      cout << setw(30) << "Vetor  v após reverse = " << v << endl;
    }  
  
  if(funcoes[selecao]=="rotate")
    {
      rotate(v.begin(),v.begin() + v.size()/2, v.end());
      cout << setw(30) << "Vetor  v após rotate= " << v << endl;  
    }  
  if(funcoes[selecao]=="accumulate")
    {
      for ( int i = 0;   i < v.size();   i++ )
	cout << setw(30) << "valor acumulado até "<< i << " = " << accumulate (v.begin(),v.begin() + i + 1,0) << endl;
    }  

  if(funcoes[selecao]=="adjacent_difference")
    {
      cout << setw(30) << "uso de adjacent_difference:";
      adjacent_difference(v.begin(), v.end(),ostream_iterator<int>(cout," "));
      cout <<  endl;
    }  
  if(funcoes[selecao]=="sort")
    {
      random_shuffle(v.begin(),v.end());
      cout << setw(30) << "Vetor  v após random_shufle= " << v << endl; 
      sort(v.begin(),v.end());
      cout << setw(30) << "Vetor  v após sort= "  << v  << endl;  
    }  

  if(funcoes[selecao]=="binary_search")
    {
      //      for ( int i = 0;   i < v.size();   i++ )
	{
	cout << setw(30) << "Valor " << 3 << ( binary_search(v.begin(),v.end(),3) ? " encontrado ": " não encontrado" ) << endl;
	cout << setw(30) << "Valor " << 22 << ( binary_search(v.begin(),v.end(),22) ? " encontrado ": " não encontrado" ) << endl;
	}
    }  

  if(funcoes[selecao]=="includes")
    {
      v3 = v2 = v ;       v3.push_back(123);      v2.push_back(333);
      cout << setw(30) << "Vetor  v2= "  << v2  << endl;  
      cout << setw(30) << "Vetor  v3= "  << v3  << endl;  
      //  cout.imbue(locale("pt_BR")); // opcional
      cout <<setw(30)<< "v  inclue v2 -> "<< boolalpha << includes ( v.begin(),  v.end(),  v2.begin(), v2.end() )<< endl;
      cout <<setw(30)<< "v3 inclue v2 -> "<< boolalpha << includes ( v3.begin(), v3.end(), v2.begin(), v2.end() )<< endl;
      cout <<setw(30)<< "v  inclue v3 -> "<< boolalpha << includes ( v.begin(),  v.end(),  v3.begin(), v3.end() )<< endl;
      cout <<setw(30)<< "v2 inclue v3 -> "<< boolalpha << includes ( v2.begin(), v2.end(), v3.begin(), v3.end() )<< endl;
      cout <<setw(30)<< "v2 inclue v  -> "<< boolalpha << includes ( v2.begin(), v2.end(), v.begin(), v.end() )<< endl;
      cout <<setw(30)<< "v3 inclue v  -> "<< boolalpha << includes ( v3.begin(), v3.end(), v.begin(), v.end() ) << endl;
    }  
  if(funcoes[selecao]=="set_union" || funcoes[selecao]=="set_intersection" || 
     funcoes[selecao]=="set_difference" || funcoes[selecao]=="set_symmetric_difference")
    {
       // Uso de set_union
      v3 = v2 = v ;       v3.push_back(123);      v2.push_back(333);
      cout << setw(30) << "Vetor  v2= "  << v2  << endl;  
      cout << setw(30) << "Vetor  v3= "  << v3  << endl;  
      cout << setw(30) << "União de v2 e v3 =";
      set_union(v3.begin(),v3.end(),v2.begin(),v2.end(), ostream_iterator<int>(cout, "\t"));
      cout <<  endl;
     
      // Uso de set_intersection
      cout << setw(30) << "Interseção de v e v2 =";
      set_intersection(v.begin(),v.end(),v2.begin(),v2.end(), ostream_iterator<int>(cout, "\t"));
      cout <<  endl;

      // Uso de set_difference
      cout << setw(30) << "diferença de v2 e v3 (tem em v2 e não tem em v3)=";
      set_difference(v2.begin(),v2.end(),v3.begin(),v3.end(), ostream_iterator<int>(cout, "\t"));
      cout <<  endl;
      
      // Uso de set_symmetric_difference
      cout << setw(30) << "diferença simétrica de v2 e v3 (tem em v2 e não tem em v3 ou tem em v3 e não tem em v2)=";
      set_symmetric_difference(v2.begin(),v2.end(),v3.begin(),v3.end(), ostream_iterator<int>(cout, "\t"));
      cout <<  endl;
    }  
  if(funcoes[selecao]=="minus" || funcoes[selecao]=="plus" || funcoes[selecao]=="multiplies")
    {
      // Uso de função binária da stl
      // Uso da função binária minus e de transform
      cout << setw(30) << "Vetor  v2= "  << v2  << endl;  
      transform(v.begin(),v.end(),v2.begin(),v3.begin(), minus<int>());
      cout << setw(30) << "Vetor  v3 = v - v2 = " << v3 << endl;  

      // Uso da função binária plus e de transform
      cout << setw(30) << "Vetor  v= "   << v   << endl;  
      cout << setw(30) << "Vetor  v2= "  << v2  << endl;  
      transform(v.begin(),v.end(),v2.begin(),v3.begin(), plus<int>());
      cout << setw(30) << "Vetor  v3 = v + v2 = " << v3 << endl;  
      
      // Uso da função binária multiplies e de transform
      cout << setw(30) << "Vetor  v= "   << v   << endl;  
      cout << setw(30) << "Vetor  v2= "  << v2  << endl;  
      v.size() > v2.size() ?  v3 = v : v3 = v2;
      transform(v.begin(),v.end(),v2.begin(),v3.begin(), multiplies<int>());
      cout << setw(30) << "Vetor  v3 = v * v2 = " << v3 << endl;  
    }  

  if(funcoes[selecao]=="inner_product")
    {
      // Uso de inner_product (produto interno)
      cout << "ENTRE COM OS DADOS DO VETOR v\n";
      EntradaUsuario(v);                                   // Entrada dos dados do vetor v
      cout << "\nENTRE COM OS DADOS DO VETOR v2\n";
      EntradaUsuario(v2);                                  // Entrada dos dados do vetor v2
      cout << "\n"<< setw(30) << "Vetor  v= "  << v  << endl;  
      cout << setw(30) << "Vetor  v2= " << v2 << endl;  
      cout << setw(30) << "ProdutoInterno v.v2 = "<< inner_product (v.begin(),v.end(),v2.begin(),0) << endl;
    }  
      
  if(funcoes[selecao]=="generate")
    {
  // Uso de generate
      // a função chamada por generate não recebe parâmetro e retorna um elemento para o container
      // no exemplo a seguir chama a função rand para preencher o container com números aleatórios
      generate(v.begin(),v.end(), rand);
      cout << setw(30) << "Vetor de números aleatórios v= " << v << endl;
  }  
  if(funcoes[selecao]=="Mostra vetor")
    cout << setfill(' ') << setw(30) << "Vetor  v= " << v << endl;      

  if(funcoes[selecao]=="sair do programa" )
    return 0;

  cout <<"\a-->Pressione enter para continuar";
  cin.get();
  cin.clear();
  return 1; // se não escoleu sair retorna verdadeiro
}
  
int main()
{
  TesteFuncoesGenericas obj;
  while(obj.run());
  return 0;
}
