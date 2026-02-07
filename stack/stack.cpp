#include<iostream>
#include<stack>
#include<string>
using namespace std;
void pushAtbutton(stack<int> &s,int val)
{
    if(s.empty())
    {
        s.push(val);
        return;
    }

    int temp=s.top();
    s.pop();
     pushAtbutton(s,val);
    s.push(temp);
}


string reverseString(string str)
{
    string ans="";
    stack<char> stack;
    for(int i=0;i<str.size();i++)
    {
        stack.push(str[i]);
    }

    while(!stack.empty())
    {
        char topchar=stack.top();
        ans+=topchar;
        stack.pop();
    }
    return ans;
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    // pushAtbutton(st,4);
   cout<<reverseString("Gajendra");
    // while(!st.empty())
    // {
    //     cout<<st.top();
    //     st.pop();
    // }
}