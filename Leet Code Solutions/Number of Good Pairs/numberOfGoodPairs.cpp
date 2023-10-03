#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        // created a map to store the frequency of unique elements
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        //Iterate over the map , and apply basic combinatorics (nc2) to get the answer
        for(auto it:mp){
            if(it.second>1){
                ans+=((it.second)*(it.second-1))/2;
            }
        }
        return ans;
    }
};