#include<iostream>
using namespace std;
void generateBinary(int n,int start,string ans)
{
    if(n==0)
    {
        cout<<ans<<endl;
        return;
    }

    if(start!=1)
    {
        generateBinary(n-1,0,ans+'0');
        generateBinary(n-1,1,ans+'1');
    }else
    {
        generateBinary(n-1,0,ans+'0');
    }
}

int main()
{
     string ans="";
    generateBinary(3,0,ans);
}