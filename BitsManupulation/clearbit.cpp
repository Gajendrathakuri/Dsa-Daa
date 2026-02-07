#include<iostream>
using namespace std;
int clearBit(int n,int pos)
{
  int bitmask=~(1<<pos);
  return n & bitmask;
}

int main()
{
    cout<<clearBit(6,1);
}