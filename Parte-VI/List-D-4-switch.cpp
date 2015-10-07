/** @copyright (C) Andre Duarte Bueno @file List-D-4-switch.cpp */

#include <vector>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  vector <string> time;

  time.push_back (string ("Palmeiras"));
  time.push_back (string ("Corintians"));
  time.push_back (string ("São Paulo"));
  time.push_back (string ("Santos"));

  cout << "Para encerrar, digite o caractere de fim de arquivo." << endl
       << "No Windows/DOS (ctrl+z) no GNU/Linux, Unix (ctrl+d):\n" << endl
       << "--> Qual o seu time do coração <--:" << endl;
  for (int i = 0; i < time.size(); i++)
    cout << setw(20) << time[i] << " (" << setw(2) << i << ") :" << endl;

  int resp;
  while (cin >> resp)
    {
      cin.get();
      string osite ("O site de seu time está em: ");
      
      switch (resp)
	{
	case 0:
	  cout << "Parabéns, você escolheu um tetracampeão Brasileiro." <<  endl;
	  cout << osite << "http://www.palmeiras.com.br/" << endl;
	  break;

	case 1:
	  cout << "Parabéns, você escolheu um tricampeão Brasileiro." << endl;
	  cout << osite << "http://www.corinthians.com.br/" << endl;
	  break;

	case 2:
	  cout << "Parabéns, você escolheu um tricampeão Brasileiro" << endl;
	  cout << osite << "http://www.spfc.com.br/" << endl;
	  break;

	case 3:
	  cout << "Parabéns, você escolheu um campeão Brasileiro." << endl;
	  cout << osite << "http://www.santosfutebolclube.com.br/" << endl;
	  break;

	default:
	  cout << "Entrou na opção default do switch, ou seja, você entrou "
	       << "com uma opção errada, repita a operação." << endl;
	  break;		// Break opcional
	}
    }

  return 0;
}
