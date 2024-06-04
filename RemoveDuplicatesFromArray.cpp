/*
    Here we are Back with 2-pointer approach to solve the Remove Duplicates from Sorted Array - Part - {1}
*/

#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){   
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int remove_duplicates(vector<int> &v){
    int i = 0;
    for(int j = 1; j < v.size(); j++)
    {
        if(v[i] != v[j]){
            i++;
            v[i] = v[j];
        }
    }
    return i + 1;
}

int main(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << remove_duplicates(v) << endl;
    printvec(v);
    return 0;
}