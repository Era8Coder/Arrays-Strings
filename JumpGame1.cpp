#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach :(
bool jump_game(vector<int> &v) {
    map<int, int> mp;
    int n = v.size();
    for (int i = 0; i < n; i++) {
        if (mp.find(i) == mp.end() && i != 0) {
            // If the current index is not reachable, return false
            return false;
        }
        int k = v[i];
        int m = min(i + k, n - 1);
        for (int j = i + 1; j <= m; j++) {
            mp[j]++;
        }
    }
    // Check if the last index is reachable
    return mp.find(n - 1) != mp.end();
}

// Optimized Code :)
// Using Valley Peak Approch -> One of the most Fascinating Codes :_
bool jumpgame(vector<int> &v){
    int reachable = 0;          // that is we are finding which one os the reachable node
    for(int i=0; i<v.size(); i++){
        reachable = max(i+v[i],reachable);
    }
    if(reachable >= v.size() - 1){
        return true;
    }
    return false;
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << jump_game(v) << endl;
    return 0;
}