#include<iostream>
using namespace std;
int setithBit(int num,int pos)
{
    int maskbit=1<<pos;
    return num | maskbit;
}

int main()
{
    cout<<setithBit(6,3)<<endl;
    cout<<setithBit(5,1)<<endl;

}