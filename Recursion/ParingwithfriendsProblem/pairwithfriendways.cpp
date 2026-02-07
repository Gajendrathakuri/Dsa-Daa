#include<iostream>
using namespace std;
int pairingFriends(int n)
{
    if(n==1 || n==2)
    {
        return n;
    }else
    {
        return pairingFriends(n-1)+ (n-1)*pairingFriends(n-2);
    }
}
int main()
{
    cout<<pairingFriends(5);
}