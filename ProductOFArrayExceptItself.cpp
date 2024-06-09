#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

vector<int> product(vector<int> &v){
    int n = v.size();
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);
    for(int i=1; i<n; i++){
        prefix[i] = v[i-1]*prefix[i-1];             // Product of all terms which are before it :)
    }
    for(int j=n-2; j>=0; j--){
        suffix[j] = v[j+1]*suffix[j+1];             // Product of all terms which are after it :)
    }
    vector<int> ans(n,1);
    for(int i=0; i<n; i++){
        ans[i] = prefix[i]*suffix[i];
    }
    printvec(prefix);
    printvec(suffix);
    return ans;
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){ 
        cin >> v[i];
    }
    vector<int> ans = product(v);
    printvec(ans);
    return 0;
}