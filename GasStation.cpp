#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin>>n;
    vector<int> gas(n);
    vector<int> cost(n);
    int gases = 0;
    int costs = 0;

    for(int i=0; i<n; i++){ 
        cin >> gas[i];
        gases = gases + gas[i];
    }

    for(int j=0; j<n; j++){
        cin >> cost[j];
        costs = costs + cost[j];
    }

    if(gases < costs){
        cout << -1 << endl;
        return 0;
    }   
    int curr = 0;
    int start= 0;
    for(int i=0; i<n; i++){
        curr += gas[i] - cost[i];
        if(curr < 0){
            curr = 0;
            start = i + 1;
        }
    }
    cout << start << endl;
    return 0;
}