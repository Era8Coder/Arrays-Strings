/*
    Going To Explore Tuples Today :_
    Easy 6-7 Lines Code :)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    tuple<char,int,float> she;
    she = make_tuple('a', 10, 15.5);
    cout << get<0>(she) << " " << get<1>(she) << " " << get<2>(she) << endl;        // Extracting all the Three Elements from the Tuple
    // Trying to Modify
    get<0>(she) = 'b';
    get<1>(she) = 12;
    cout << get<0>(she) << " " << get<1>(she) << " " << get<2>(she) << endl;
    return 0;
}