/** @copyright (C) Andre Duarte Bueno @file List-30-2-queue.cpp */
#include <iostream>
#include <queue>
#include <vector>
#include <list>
#include <iomanip>
using namespace std;

int main()
{
  // Cria queue  a partir de deque, e list
  std::queue <int> container_queue_deque;
  std::queue <int,  std::list < int > >	container_queue_list;
  
  // Adicionando elementos ao container
  for ( int i = 0; i < 10; ++i )			
    {
      container_queue_deque.push(i);
      container_queue_list.push(i * i);
    }
  cout << "\nRetirando elementos do container_queue_deque: ";
  while (! container_queue_deque.empty())
    {
      cout << setw(5) << container_queue_deque.front() << ' ';
      container_queue_deque.pop();
    }
  cout << "\nRetirando elementos do container_queue_list : ";
  while (! container_queue_list.empty())
    {
      cout <<  setw(5) << container_queue_list.front() << ' ';
      container_queue_list.pop();
    }
  cout << endl;	  
  return 0;
}
