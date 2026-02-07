#include<iostream>
using namespace std;
class Student{
  public:
  Student(){}
}
void bubbleSort(int array[],int size){
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                 swap(array[j],array[j+1]);
            }
        }
    }

    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{
    int array[5]={2,1,5,7,6};
    int size=sizeof(array)/sizeof(array[0]);
    bubbleSort(array,size);
}
