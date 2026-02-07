#include<iostream>
using namespace std;
void clearithBit(int num,int ith)
{
    int maskbit=(~0)<<ith;
    cout<<(num & maskbit);
}
int main()
{
  clearithBit(15,2);
}