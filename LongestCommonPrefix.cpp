#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin>>n;
    vector<string> strs(n);
    for(int i=0; i<n; i++){
        cin >> strs[i];
    }

    sort(strs.begin(),strs.end());              // It will do it on the basis of lexicographical order and will check so if we will check first and last only
    // Then the maximum Tension is Gone
    string ans = "";
    int l = min(strs[0].size(), strs[strs.size()-1].size());            // That is basically first and last have least similarity
    for(int i=0; i<l; i++){
        if(strs[0][i] != strs[strs.size()-1][i]){
            break;
        }
        ans = ans + strs[0][i];
    }
    cout << ans << endl;
    return 0;
}