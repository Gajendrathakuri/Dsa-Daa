

#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Stack{
  public:
  vector<int>st;
  Stack()
{
  }

  void push(int val){
    st.push_back(val);
  }

  void pop(){
    st.pop_back();
  }
  int getMin()
{
   sort(st.begin(),st.end());
    return st[0];
    
  }

void display()
{
  for(auto item:st)
  {
    cout<<item<<" ";
  }
}
};
int main()
{
  Stack s;
  s.push(100);
  s.push(200);
  s.push(300);
  s.push(400);
  s.pop();
  cout<<s.getMin();
  s.display();
} 
