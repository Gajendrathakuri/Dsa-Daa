#include <iostream>
#include <stack>
#include <vector>
using namespace std;
 void spanStock(vector<int> stock,vector<int> span)
{
 stack<int>s;
  span[0]=1;
  s.push(0);
  
 for(int i=1;i<stock.size();i++)
  {
    int currentPrice=stock[i];
    while(!s.empty() && currentPrice >=stock[s.top()])
    {
    s.pop();
    }
    if(s.empty())
    {
      span[i]=i+1;
    }else {
      int preHight=s.top();
      span[i]=i-preHight;
    }
    s.push(i);
  }
for(int i=0;i<span.size();i++)
{
  cout<<span[i]<<" ";
}

}

 int main (int argc, char *argv[]) {
   vector<int>stock={100,80,60,70,60,85,100};
    vector<int>span(stock.size(),0);
   spanStock(stock,span);
  return 0;
}
