#include<iostream>
using namespace std;
long getresult(string s,string n){
  int a=stoi(s);
  int b=stoi(n);
  long c=a*b;
  string ans="";
  ans=c;
cout<<ans;
return c;

}

int main()
{
    cout<<getresult("123","234");
}