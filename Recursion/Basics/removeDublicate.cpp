#include<iostream>
using namespace std;

void removedublicate(string str,string ans,int i,int map[])
    {
     char ch=str[i];
     int mapIndex=(int)(ch-'a');
     if(i==str.size())
     {
        cout<<"Ans is : "<<ans;
        return;
     }
     if(map[mapIndex])
     {
        removedublicate(str,ans,i+1,map);
     }else{
        map[mapIndex]=true;
        removedublicate(str,ans+ch,i+1,map);
     }
    }

    int main()
    {
        string name="googlee";
        string ans="";
        int map[26]={false};
        removedublicate(name,ans,0,map);
    }