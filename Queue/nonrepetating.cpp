#include <iostream>
#include <iterator>
#include <queue>
using namespace std;
void  nonrepet(string str) 
{
   queue<char> queue;
   int freq[26]={0};
  for(int i=0;i<str.size();i++)
  {
     char ch=str[i];
    queue.push(ch);
    freq[ch-'a']++;

    while (!queue.empty() && freq[queue.front()-'a']>1) {
      queue.pop();
    };
    if(queue.empty())
    {
      cout<<"-1";
    }else {
    cout<<queue.front();
    }
  } 
}

int main()
{
  string str="aabccxb";
  nonrepet(str);
}
