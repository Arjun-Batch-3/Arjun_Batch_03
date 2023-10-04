#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        map<string, int> mp;
        vector<string> v;
         int sum=0;
        for (int j = 0; j < 3 * n; j++) {
            string s;
            cin >> s;
            mp[s]++;
            v.push_back(s);
        }
int cnt=0;
        for (int x = 0; x <3 * n; x++) {
              cnt++;
               if(mp[v[x]]==1)
               {
                   sum=sum+3;
               }
               else if(mp[v[x]]==2)
               {
                   sum=sum+1;
               }
               if(cnt%n==0)
               {
                   cout<<sum<<" ";
                   sum=0;
                   cnt=0;
               }
        }

        cout << endl;
    }

    return 0;
}

