#include <iostream>
#include <vector>
using namespace std;
 vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
  for(int i=0,x=0;i<nums.size();i++)
     {
    if(nums[i]==target)
    {
      ans[x++]=i;
    }
  } 
        return ans;
    }
int main()
{
  vector<int>items={5,7,7,8,8,10};
   vector<int> lists=searchRange(items, 8);
  for(auto item:lists)
  {
    cout<<item;
  }
}
