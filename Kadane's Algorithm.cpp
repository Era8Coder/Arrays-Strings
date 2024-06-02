/*
    Kadane's is the most popular Algorithm to find the MAXIMUM Sum subarray :_
*/

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
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    cout << max_subarray(v) << endl;
    return 0;
}