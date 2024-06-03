#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]] = i;
        }
        int x;
        int left;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            x = nums[i];
            left = target - x;
            if(mp[left] != 0 && mp[left] != i){
                ans.push_back(i);
                ans.push_back(mp[left]);
                break;
            }
        }
        return ans;
    }
};