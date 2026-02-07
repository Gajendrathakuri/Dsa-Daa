// merge sorting 

#include<iostream>
#include<vector>
using namespace std;
void mergesortconcur(int arr[],int start,int mid,int end){
  vector<int>temp;
    int i=start;
    int j=mid+1;
    while (i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i++]);
        }else
        {
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid)
    {
        temp.push_back(arr[i++]);
    }

    while (j<=end)
    {
        temp.push_back(arr[j++]);
    }
    //
    for(int i=start,x=0;i<=end;i++)
    {
        arr[i]=temp[x++];
    }  

}

void mergesort(int arr[],int si,int end)
{
      if(si>=end)
    return;
    int mid=si+(end-si)/2;
    mergesort(arr,si,mid);
    mergesort(arr,mid+1,end);
    mergesortconcur(arr,si,mid,end);
}

int main()
{
    int arr[5]={3,2,5,7,8};
    mergesort(arr,0,4);
    
     for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<" ";
    }
}