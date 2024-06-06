#include<bits/stdc++.h>
using namespace std;

// XOR of a number with itself is "ZERO" => We can implement this easily to solve Single Number Problem 
int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^v[i];
    }
    cout << ans << endl;            // It will return that which is not the Duplicate One
    return 0;
}