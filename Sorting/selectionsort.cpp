#include<iostream>
#include<algorithm>
using namespace std;
void selectionsort(int array[],int size)
{   
    for(int i=0;i<size-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j]<array[minindex])
            {
                    minindex=j;
            }
            
        }
        swap(array[i],array[minindex]);
    }

    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    
}

int main()
{
    int array[5]={4,1,6,8,2};
    selectionsort(array,5);
}