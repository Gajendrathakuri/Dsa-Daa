#include<iostream>
using namespace std;
int tilingways(int n)
{ 
    if(n==0 || n==1)
    {
        return 1;
    }
  // if horizontal n-2 for vertical n-1
  return tilingways(n-1) + tilingways(n-2);
}
int main()
{
    cout<<tilingways(5);
}