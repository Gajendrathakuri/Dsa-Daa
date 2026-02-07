#include <deque>
#include <iostream>
using namespace std;
int main()
{
  deque<int> deq;
  deq.push_back(100);
  deq.push_front(200);
  while(!deq.empty())
   {
    cout<<deq.front();
    cout<<deq.back();
    
  }
}  
