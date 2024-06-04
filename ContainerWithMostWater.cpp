// Here we are back again with the classical Problem of Two Pointers
/*
You are given an integer array height of length n. 
There are n vertical lines drawn such that the two 
endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, 
such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.
*/

#include<bits/stdc++.h>
using namespace std;

int max_area_squaretime(vector<int> height){      // Caclculating the Maximum height  
    vector<pair<int,int>> ans;
    for(int i=0; i<height.size(); i++){
        for(int j=i+1; j<height.size(); j++){
            ans.push_back(make_pair(i,j));          // Making all the pairs of integers :)
        }   
    }
    int val = INT_MIN;
    for(int i=0; i<ans.size(); i++){
        val = max((ans[i].second - ans[i].first)*min(height[ans[i].first],height[ans[i].second]),val);
    }
    return val;
}

int max_area_lineartime(vector<int> height){
    int i=0;
    int j=height.size()-1;
    int ans = INT_MIN;
    while(i<=j){
        ans = max(ans,min(height[j],height[i])*(j-i));
        if(height[i] > height[j]){
            j--;
        }else{
            i++;
        }
    }
    return ans;
}

int main(){
    int n;  cin >> n;
    vector<int> height(n); 
    for(int i=0; i<n; i++){
        cin >> height[i];
    }
    cout << max_area_lineartime(height) << endl;
    cout << max_area_squaretime(height) << endl;
    return 0;
}