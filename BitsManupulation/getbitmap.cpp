#include<iostream>
using namespace std;
int bitmap(int n,int i)
{
    int bitmask=1<<i;
    if(!(n & bitmask))
    {
        return 0;
    }else{
        return 1;
    }
}
int main()
{
   cout<<bitmap(6,2);
    cout<<bitmap(4,1);
    cout<<bitmap(8,3);

}