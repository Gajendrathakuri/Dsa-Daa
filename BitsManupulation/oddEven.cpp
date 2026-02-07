#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter any number";
    cin>>number;
    if((number & 1)==0)
    {
        cout<<"number is even";
    }else{
        cout<<"number is odd";
    }
    return 0;
}

