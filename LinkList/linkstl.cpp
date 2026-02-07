#include<iostream>
#include<iterator>
#include<list>
using namespace std;
int main()
{
    list<int>ll;
    ll.push_front(2);
    ll.push_front(4);
    ll.push_front(6);
    ll.push_front(8);
    ll.push_back(50);
    ll.push_back(100);
    list<int>::iterator itr;
    ll.insert(itr,2,0);

    for(itr=ll.begin();itr!=ll.end();itr++)
    {
        cout<<*itr<<"--->";
    }
    cout<<"NUll";

}