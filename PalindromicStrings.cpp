// TiMe DoEsN't HeAl AnYtHiNg; It JuSt TeAcHeS HoW tO lIvE wItH pAiN -> World Asks me why I love Her ?
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef priority_queue <int, vector<int>, greater<int>> minheap;
typedef priority_queue <int> maxheap;
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=a; i<b; i++)
const int N=1e9+7;
const int M=1e8+7;
 
int gcd(int a, int b){
    if(a > b){
        swap(a,b);
    }
    int dividend = b;
    int divisor = a;
    int remainder = b%a;
    while(remainder != 0){
        dividend = divisor;
        divisor = remainder;
        remainder = dividend%divisor;
    }
    return divisor;
}
 
bool is_palindrome(string s){
        string str = "";
        for (auto &it : s) {
            if (isalnum(it)) {          // Code to check whether a character is alpha num or not
                str.push_back(tolower(it));
            }
        }
        
        int i = 0;
        int j = str.size() - 1;

        while (i <= j) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
}

void solve(){
    string s = "A man, a plan, a canal: Panama";
    cout << is_palindrome(s) << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;  
}