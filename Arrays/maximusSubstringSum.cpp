#include<iostream>
#include<climits>
using namespace std;
// By using Brute Force techniques 
// complexity O(n3)
void maxsubarraySum(int *array,int size)
{
     int maxvalue=INT_MIN;
    for(int start=0;start<size;start++)
    {
        for(int end=start;end<size;end++)
        {
            int sum=0;
            for(int j=start;j<=end;j++)
            {
                sum+=array[j];
                
            }
            maxvalue=max(maxvalue,sum);
        }

    }
    cout<<"max value is : "<<maxvalue<<endl;
}

int main()
{
    int array[6]={2,-3,6,-5,4,2};
    int size=sizeof(array)/sizeof(int);
    maxsubarraySum(array,size);
}

// // complexity O(n2)
void maxsubarraySum(int *array,int size)
{
     int maxvalue=INT_MIN;
    for(int start=0;start<size;start++)
    { 
         int sum=0;
        for(int end=start;end<size;end++)
        {
             sum+=array[end];
             maxvalue=max(maxvalue,sum);
        } 
    }
    cout<<"max value is : "<<maxvalue<<endl;
}

int main()
{
    int array[6]={2,-3,6,-5,4,2};
    int size=sizeof(array)/sizeof(int);
    maxsubarraySum(array,size);
}


// Kadans algorithms for O(n) time complexity
void maxsubarraySum(int *array,int size)
{
     int maxvalue=INT_MIN;
     int sum=0;
    for(int start=0;start<size;start++)
    {  
        sum+=array[start];
        maxvalue=max(maxvalue,sum);
        if(sum<0)
        {
            sum=0;
        } 
    }
    cout<<"max value is : "<<maxvalue<<endl;
}
int main()
{
    int array[6]={2,-3,6,-5,4,2};
    int size=sizeof(array)/sizeof(int);
    maxsubarraySum(array,size);
}