#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

int remove_duplicates(vector<int> &nums){
    int i=0;
    for(int j=0; j<nums.size(); j++){
        if(i==0 || i==1 || nums[j]!=nums[i-2]){
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

int main(){
    int n;  cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    cout << remove_duplicates(nums) << endl;
    printvec(nums);
    return 0;
}