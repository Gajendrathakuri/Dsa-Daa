#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int coinChange(vector<int>& coins, int amount) {
        int ans=0;
        vector<int> dp(amount+1,amount+1);
        for(auto am:dp)
        {
            cout<<am<<" ";
        }
        sort(coins.begin(),coins.end());
        for(int i=coins.size()-1;i>=0 && amount>=0;i--)
        {
            if( amount>=coins[i])
            {
                ans= ans + amount/coins[i];
                cout<<ans<<" "<<endl;
                cout<<i<<" "<<coins[i]<<""<<endl;
                amount= amount%coins[i];
                cout<<i<<" "<<amount<<""<<endl;

            }
            cout<<ans;
          
        }
        //  if(amount!=0){return -1;}
        return ans;
    }
int main()
{
  vector<int>coins={186,419,83,408};
  int amount=6249;
//   sort(coins.begin(),coins.end());

//   for(auto item:coins)
//   {
//     cout<<item<<" ";
//   }
cout<<coinChange(coins,amount);
  
}
