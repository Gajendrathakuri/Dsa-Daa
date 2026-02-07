// buying and selling best day stock  

#include<iostream>
#include<climits>
using namespace std;
void maxProfit(int *array,int n)
{
    int bestbuy[100000];
    bestbuy[0]=INT_MAX;
     for(int i=1;i<n;i++)
     {
       bestbuy[i]=min(bestbuy[i-1],array[i-1]);
     }
    int maxProfit=0;
    for(int i=0;i<n;i++)
{
    int currentProfit=array[i]-bestbuy[i];
    maxProfit=max(maxProfit,currentProfit);

}
cout<<"max profit is: "<<maxProfit;

}

int main()
{
    int prices[6]={7,1,5,3,6,4};
   int size=sizeof(prices)/sizeof(int);
    maxProfit(prices,size);
}