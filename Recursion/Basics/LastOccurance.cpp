#include<iostream>
#include<vector>
using namespace std;
int lastOccurance(vector<int>vect,int i,int target)
{
     if(i<0)
     {
        return -1;
     }
    if(vect[i]==target)
    {
        return i;
    }
    return lastOccurance(vect,i-1,target);
}

int main()
{    vector<int>array={1,2,3,4,5,6,7,5,6};
    cout<<lastOccurance(array,array.size()-1,7);
}