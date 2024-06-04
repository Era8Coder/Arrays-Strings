/*
    Here's Again the Classical Problem How to Find the Three Numbers whose sum = Target Number given to US :)
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Three_Sum(vector<int> v, int target){
    sort(v.begin(), v.end());
    int sum = 0;
    set<vector<int>> s;
    vector<vector<int>> op;
    for(int i=0; i<v.size(); i++){
        int j = i + 1;
        int k = v.size() - 1;
        while(j < k)
        {
            int sum = v[i] + v[j] + v[k];
            if(sum == target){
                s.insert({v[i],v[j],v[k]});
                j++;
                k--;
            }else if(sum < target){
                j++;
            }else{
                k--;
            }
        }
    }
    for(auto it : s){
        op.push_back(it);
    }
    return op;
}

int main(){
    int n;  cin>>n;
    int target; cin >> target;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vector<vector<int>> ans = Three_Sum(v, target);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){   
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}