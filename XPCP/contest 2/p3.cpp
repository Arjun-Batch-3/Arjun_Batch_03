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
        int v[r];
         for(int i=0;i<r;i++)
        {
        cin>>v[i];
        }
        int max1=0;
         for(int i=0;i<r;i++)
        {
        if(v[i]>max1)
        {
        max1=v[i];
        }
        }

        int f[max1+1]={0};
        for(int i=0;i<r;i++)
        {
        f[v[i]]++;
        }
int m2=0;
int f1=0;
        for(int i=0;i<max1+1;i++)
        {
           if(f[i]>=3)
           {
               m2=1;
               f1=i;
           }
        }
        if(m2!=0)
        {
            cout<<f1<<endl;
        }
        else{
            int p=-1;
            cout<<p<<endl;
        }



    }


    return 0;
}
