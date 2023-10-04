#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int sz;
        cin >> sz;
        string s;
        cin.ignore(); // Ignore the newline character after sz
        getline(cin, s);

        int c[26] = {0}; // Initialize an array for English alphabet characters
        int cnt = 0;

        for (int i = 0; i < sz; i++) {
            c[s[i] - 'A']++;
        }

        for (int i = 0; i < 26; i++) {
            if (c[i] == 1) {
                cnt += 2;
            } else if (c[i] > 1) {
                cnt += 2 + c[i] - 1;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}

