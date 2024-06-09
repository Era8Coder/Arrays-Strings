#include<bits/stdc++.h>
using namespace std;

int trap(vector<int> &height){
    int n = height.size();
    vector<int> left(n);
    vector<int> right(n);
    int maxl = height[0];
    int maxr = height[height.size()-1];
    for(int i=0; i<n; i++){
        maxl = max(maxl,height[i]);             // Maximum height from Left
        left[i]=maxl;
    }
    for(int j=height.size()-1; j>=0; j--){
        maxr = max(maxr,height[j]);             // Maximum height from right
        right[j]=maxr;
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans + min(left[i],right[i]) - height[i];
    }
    return ans;
}

int main(){
    int n;  cin>>n;
    vector<int> height(n);
    for(int i=0; i<n; i++){ 
        cin >> height[i];
    }
    cout << trap(height) << endl;
    return 0;
}