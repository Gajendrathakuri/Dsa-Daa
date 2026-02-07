#include<iostream>
using namespace  std;
class Bit{
  public:
  int updateBit(int num,int i,int val)
  {
     num=num & ~(1<<i);
     num=num | (val<<i);
     return num;
  }
};
int main()
{
    Bit s;
  cout<<s.updateBit(7,2,0);
}