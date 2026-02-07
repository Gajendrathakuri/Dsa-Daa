#include<iostream>
using namespace std;
int powerofx(int x,int n)
{  int result=0;
    if(n==0)
        {
            return 1;
        }
        int power=powerofx(x,n/2);
        int squarePow=power * power;
       if(n%2!=0)
       {
        return x*squarePow;
       }
          return squarePow;
}
int main()
{
 cout<<powerofx(2,5);
}