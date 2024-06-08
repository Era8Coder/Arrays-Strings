#include<bits/stdc++.h>
using namespace std;

string reverse(string str){
    int i = 0;
    int len = str.size();
    vector<string> v;
    string x = "";
    cout << str << endl;
    while(i < len){             // Till i is less then length of string
        if(str[i] == ' '){
            // cout << "here" << endl;
            if(!x.empty()){     // ** STAR MARKER STEP **//        // Checking the case when more than One space comes 
                v.push_back(x);
                x="";
            }

        }else{
            x = x + str[i];
            // cout << x << endl;
        }
        i++;
    }
    if(!x.empty()){     // adding the last word if it's left
        v.push_back(x);
    }
    string ans = "";
    cout << v.size() << endl;
    for(int i=v.size()-1; i>=0; i--){
        if(i!=0){
            ans = ans + v[i] + " ";
        }else{
            ans = ans + v[i];
        }
    }
    return ans;
}

int main(){
    string s = "a good  example";
    string ans = reverse(s);
    cout << ans << endl;
    return 0;
}