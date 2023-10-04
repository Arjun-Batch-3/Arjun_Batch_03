#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int even_count = 0, odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }

        if (even_count == n || odd_count == n || even_count == 0 || odd_count == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

