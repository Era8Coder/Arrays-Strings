#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &v){
    int n = v.size();
    sort(v.begin(), v.end());
    vector<vector<int>> ans;

    for(int i=0; i<n; i++){
        // If the current interval doesn't lie in the last interval
        if(ans.empty()  || v[i][0] > ans.back()[1]){            // Last one of the Previous Element
            ans.push_back(v[i]);
        }
        // If the current interval lies in the last interval
        else{
            ans.back()[1] = max(ans.back()[1], v[i][1]);                // Merging of Intervals
        }
    }

    return ans;
}    

int main(){
    vector<vector<int>> v = {{1,3}, {8,10}, {2,6}, {15,18}};
    vector<vector<int>> ans = merge(v);
    cout << "The Merged Intervals are : " << endl;
    for(auto it : ans){
        cout << " [" << it[0] << "," << it[1] << "] ";
    }
    cout << endl;
    return 0;
}