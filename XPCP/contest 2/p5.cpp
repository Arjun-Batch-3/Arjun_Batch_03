#include<bits/stdc++.h>
using namespace std;

bool odd(int * arr,int sz)
{
    for(int i=0; i<sz; i++)
    {
        if(i%2==0&&arr[i]%2==0)
        {
            return false;
        }
    }
    return true;
}
bool even(int * arr,int sz)
{
    for(int i=0; i<sz; i++)
    {
        if(i%2==0&&arr[i]%2==1)
        {
            return false;
        }
    }
    return true;
}
bool odd1(int * arr,int sz)
{
    for(int i=0; i<sz; i++)
    {
        if(i%2==1&&arr[i]%2==0)
        {
            return false;
        }
    }
    return true;
}
bool even1(int * arr,int sz)
{
    for(int i=0; i<sz; i++)
    {
        if(i%2==1&&arr[i]%2==1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r;
        cin>>r;
        int v[r];
        int c1=0,c2=0;
        bool e=false,f=false;
        for(int i=0; i<r; i++)
        {
            cin>>v[i];

        }
        if(v[0]%2==0)
        {
            e=even(v,r);
        }
        else if(v[0]%2==1)
        {
            e=odd(v,r) ;
        }
        if(v[1]%2==0)
        {
            f=even1(v,r);
        }
        else if(v[1]%2==1)
        {
            f=odd1(v,r);
        }

        if(e&&f)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
