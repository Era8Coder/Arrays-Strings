#include<bits/stdc++.h>
using namespace std;

int max_subarray(vector<int> v){
    int curr_sum = 0;
    int max_sum = 0;
    int negatives = 0;
    for(int i=0; i<v.size(); i++){
        curr_sum = curr_sum + v[i];
        if(v[i] < 0){
            negatives++;
        }
        if(curr_sum > max_sum){
            max_sum = curr_sum;
        }
        if(curr_sum < 0){
            curr_sum = 0;
        }
    }
    if(negatives == v.size()){
        max_sum = *max_element(v.begin(),v.end());
    }
    return max_sum;
}

int main(){
    int n;  cin>>n;
    int sum = 0;
    vector<int> v(n);
    int negatives = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
        if(v[i] < 0){
            negatives++;
        }
    }   
    vector<int> u(n);
    for(int i=0; i<n; i++){
        u[i] = -1*v[i];
    }
    if(negatives == n){
        cout << *max_element(v.begin(),v.end()) << endl;
    }else{
        int ans1 = max_subarray(v);
        int ans2 = max_subarray(u);                 // it will return me the array with maximum but negative in sign 
        cout << max(ans1,sum + ans2) << endl;
    }
    return 0;
}