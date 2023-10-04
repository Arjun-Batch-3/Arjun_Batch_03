#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t;
    cin >> s >> t;
    int f = 1;
    int d = 1;
    int a[101] ;
    int b[101] ;
    int c[101] ;


    for (int i = 1; i < 101; i++)
    {

        for(int r=0; r<101; r++)
        {
            a[r]=0;
            b[r]=0;
            c[r]=0;
        }

        for (int j = 1; j < 101; j++)
        {

            if (j > 49 && j < 101)
            {
                a[j] = (a[j] + 1) * f;
            }
            if ( (j%4!= 0 )&& (j%5!= 0))
            {
                b[j] = (b[j] + 1) * f;
            }
            if(j==1)
            {
                a[j]=0;
                b[j]=0;
                c[j]=(c[j] + 1) * f;
            }
            if (j % 2 == 0)
            {
                c[j] = (c[j] + 1) * f;
            }

        }
        f++;

        for (int k = 1; k < 8; k++)
        {
            if ((a[k] + b[k] + c[k]) <= s &&(a[k] * b[k] * c[k]) <= t)
            {
                d++;
            }
        }

        for (int k = 1; k < 8; k++)
        {
            cout << a[k] << " " << b[k] << " " << c[k] << endl;
        }


    }

    cout << d << endl;
    return 0;
}






