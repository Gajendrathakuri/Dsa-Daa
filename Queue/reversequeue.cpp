#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
  stack<char>st;
  queue<char>ch;
  string s="gajendra";
  for(int i=0;i<s.size();i++)
  {
    ch.push(s[i]);
  }

  while (!ch.empty()) {
    st.push(ch.front());
    ch.pop();
  }

  while(!st.empty())
  {
    ch.push(st.top());
    st.pop();
  }
  while(!ch.empty()){ 
    cout<<ch.front();
    ch.pop();
}
}
