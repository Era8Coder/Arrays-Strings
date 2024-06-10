#include<bits/stdc++.h>
using namespace std;
// Brute Force Code
// TC : O(n)
vector<string> summaryRanges(vector<int>& nums) {
    int n = nums.size();
    if(n == 0){
        return {};
    }
    if(n == 1){
        return {to_string(nums[0])};
    }
    vector<pair<int,int>> index;
    int start=0;  int end=0;
    int i = 0;
    for(i=0; i<n; i++){
        if(i == 0){
            if(nums[i+1] == nums[i] + 1){
                start = i;
            }else if(nums[i+1] != nums[i] + 1){
                // cout << "hey" << endl;
                start = i;  end = i;
                index.push_back(make_pair(start,end));
            }
        }else if(i != n - 1){
            if(nums[i+1] == nums[i] + 1 && nums[i] != nums[i-1] + 1){
                start = i;  
                end = i + 1;
                // cout << "me" << endl;
            }else if(nums[i+1] == nums[i] + 1 && nums[i] == nums[i-1] + 1){
                // end = i + 1;
                // cout << "you" << endl;
            }else if(nums[i+1] != nums[i] + 1 && nums[i] == nums[i-1] + 1){
                end = i;
                // cout << "why" << endl;
                index.push_back(make_pair(start,end));
            }else if(nums[i+1] != nums[i] + 1 && nums[i] != nums[i-1] + 1){
                start = i;
                end = i;
                // cout << "to" << endl;
                index.push_back(make_pair(start,end));
            }
        }
        else if(i == n - 1){
            if(nums[i] == nums[i-1] + 1){
                end = i;
                index.push_back(make_pair(start,end));
            }else{
                // cout << "here" << endl;
                start = i;
                end = i;
                index.push_back(make_pair(start,end));
            }
        }
    }
    vector<string> ans;;
    for(int i=0; i<index.size(); i++){
        if(index[i].first != index[i].second){
            ans.push_back(to_string(nums[index[i].first]) + "->" + to_string(nums[index[i].second]));
        }else{
            ans.push_back(to_string(nums[index[i].first]));
        }
    }
    return ans;
}
 
// Simple Code + Good One
// TC : O(n)

/*
    Here You will learn How to use many while loops at a Time ??
*/

/*
    You must know where to Use While Loops Intelligently :)
*/

vector<string> summary_ranges(vector<int> &nums){
    int i = 0;
    vector<string> s;

    int n = nums.size();
    while(i < n){               // Traversing the String
        int j = i;
        while(j+1 < n && nums[i+1] == nums[i] + 1){
            i++;
        }
        if(i == j){
            s.push_back(to_string(nums[i]));
        }else{
            s.push_back(to_string(nums[j]) + "->" + to_string(nums[i]));
        }
        i++;                // Most Efficient and Good + Small Code -> You have to write it like "THIS" 
    }
    return s;
}

int main(){
    vector<int> nums = {0,2,3,4,6,8,9};
    vector<string> ans = summaryRanges(nums);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << ",";
    }
    cout << endl;
    vector<string> ans1 = summary_ranges(nums);
    for(int i=0; i<ans.size(); i++){
        cout << ans1[i] << ",";
    }
    return 0;
}