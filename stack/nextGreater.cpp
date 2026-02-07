#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> GenerateCost(vector<int> &arr)
{
  stack<int>st;
  vector<int>ans(arr.size(),0);
  int lindex=arr.size()-1;
  ans[lindex]=-1;
  st.push(arr[lindex]);

  for(int i=lindex-1;i>=0;i--)
  { int curr=arr[lindex];
    while (!st.empty() && curr>=st.top()) {
      st.pop(); 
    }
    if(st.empty())
    {
      ans[lindex]=-1;
    }else {
      ans[lindex]=st.top();
    }
    st.push(curr);
  }
  return ans;
}
int main()
{
  vector<int>array={6,8,0,1,3};
   for (auto item :GenerateCost(array) ) {
    cout<<item<<" ";
   }
}
