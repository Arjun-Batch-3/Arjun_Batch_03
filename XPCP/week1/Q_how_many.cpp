#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,t;
    cin>>s>>t;
    int f=1;
    int d=1;


for(int i=1;i<8;i++)
{
    cout<<"p";
    int a[8]={0};
    int b[8]={0};
    int c[8]={0};
    for(int j=1;j<8;j++)
    {
      if(j>3&&j<8)
      {
          a[j]=(a[j]+1)*f;
      }
      if((j!=1)||(j=!4)||(j!=5))
      {
          b[j]=(b[j]+1)*f;
      }

      if(j%2==0)
      {
          c[j]=(c[j]+1)*f;
      }
        cout<<"x";
    }
    f++;
    /* for(int k=1;k<8;k++)
    {
        if((a[k]+b[k]+c[k])<=s||(a[k]*b[k]*c[k]<=t))
        {
            d++;
        }
    }*/
    for(int k=1;k<8;k++)
    {
        cout<<a[k]<<" "<<b[k]<<" "<<c[k]<<endl;
    }

}

    cout<<d<<endl;
    return 0;
}
