#include<iostream>
using namespace std;
int naturalSum(int n)
{  int sum=n;
    if(n==0)
    {
        return 0;
    }else
    {  
        return sum+=naturalSum(n-1);
    }
}
int main()
{
    cout<<naturalSum(5);
}