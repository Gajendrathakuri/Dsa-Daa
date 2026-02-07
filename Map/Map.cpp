#include<iostream>
#include<vector>
#include<map>
using namespace std;

void sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int> result;
        for(auto num:nums){
        result[num]++;
        }
        for(auto valu:result){
            cout<<"("<<valu.first<< valu.second<<")"<<"";
        }
    }

    int main(){
        vector<int> vect{1,2,2,3,3,3,3,4};
        sumDivisibleByK(vect,2);
    }