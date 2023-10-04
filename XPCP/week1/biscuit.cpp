#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,T;
   cin>>a>>b>>T;
   int s=0;
   for(int t=a;t<=T+0.5;t=t+a)
   {
       s=s+b;
   }
   cout<<s<<endl;
    return 0;
}
