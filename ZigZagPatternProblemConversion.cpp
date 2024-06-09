#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;   
    cin >> s;
    int num_rows;   
    cin >> num_rows;
    
    if(num_rows <= 1) {
        cout << s << endl; // For single row, the result is the string itself
        return 0;
    }

    vector<vector<char>> v(num_rows, vector<char>(s.size(), ' '));
    int i = 0, j = 0;
    int n = s.size();
    bool goingDown = true;

    for (int k = 0; k < n; k++) {
        v[i][j] = s[k];
        if (goingDown) {
            if (i < num_rows - 1) {
                i++;
            } else {
                goingDown = false;
                i--;
                j++;
            }
        } else {
            if (i > 0) {
                i--;
                j++;
            } else {
                goingDown = true;
                i++;
            }
        }
    }

    // Printing the zigzag pattern
    for (int row = 0; row < num_rows; row++) {
        for (int col = 0; col <= j; col++) {
            if (v[row][col] != ' ') {
                cout << v[row][col];
            }
        }
    }
    cout << endl;

    return 0;
}
