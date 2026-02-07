#include<iostream>
using namespace std;
void numbers(int n)
{
    if(n==0)
    {
        return;
    }else
    {
        cout<<n<<" ";
        numbers(n-1);
    }
}
int main()
{
    numbers(10);
}