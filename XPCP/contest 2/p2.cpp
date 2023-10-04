#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r;
        cin>>r;
        int v[6];
        int c=0;
        int p=6;
        while(p--)
        {
            int m=r%10;
            v[c]=m;
            r=r/10;
            c++;
        }
        int s1=0,s2=0;
        for(int i=0; i<3; i++)
        {
            s1=s1+v[i];

        }
        for(int j=3; j<6; j++)
        {
            s2=s2+v[j];

        }
        if(s1==s2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
