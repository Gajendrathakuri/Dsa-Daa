#include<iostream>
using namespace std;
void insertionSort(int array[],int size){
    int pre,i;
    for(int i=1;i<size;i++)
    {
        int current=array[i];
        pre=i-1;
        while(pre>=0 && array[pre]>current )
        {
                swap(array[pre],array[pre+1]);
                pre--;
        }
        array[pre+1]=current;
    }

    for(int i=0;i<size;i++)
    {
        cout<<array[i]<< ' ';
    }
}

int main()
{
    int array[5]={3,2,5,1,4};
    insertionSort(array,5);
}