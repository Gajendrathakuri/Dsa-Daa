#include<iostream>
using namespace std;
bool issortedArray(int array[],int n,int i)
{   if(i==n-1)
    {
        return true;
    }
    if(array[i]>array[i+1])
    {
        return false;
    }
     return issortedArray(array,n,i+1);
    
}
int main()
{
     int array[5]={1,2,4,5,6};
   
    cout<<issortedArray(array,5,0);
}