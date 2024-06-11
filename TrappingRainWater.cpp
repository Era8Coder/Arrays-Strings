#include<bits/stdc++.h>
using namespace std;;

int candy(vector<int> &ratings){
    int n = ratings.size();
    int ans = n;
    if(n == 2){
        if(ratings[0] != ratings[1]){
            ans+=1;
        }
    }else{
        for(int i=0; i<n; i++){
            if(i == 0 && ratings[i] != ratings[i+1]){
                ans += 1;
            }else if(i == n-1 && ratings[i] != ratings[i-1]){
                ans += 1;
            }else if(ratings[i] != ratings[i+1]){
                ans += 1;
            }
        }
    }
    return ans - 1;
}

int main(){
    int n;  cin>>n;
    vector<int> ratings(n);
    for(int i=0; i<n; i++)
    {
        cin >> ratings[i];
    }
    cout << candy(ratings) << endl;
    return 0;
}