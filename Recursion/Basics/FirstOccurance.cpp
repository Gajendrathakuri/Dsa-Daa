#include<iostream>
#include<vector>
using namespace std;
int firstoccurrance(vector<int>res,int target,int i){
    if(res.size()==i)
    {
        return -1;
    }
    if(target==res[i])
    {
        return i;
    }else
    {
        return firstoccurrance(res,3,i+1);
    }
}
int main()
{
    vector<int>array={1,1,1,4,1,2,3,4,5,6,7};
    cout<<firstoccurrance(array,3,0);
}