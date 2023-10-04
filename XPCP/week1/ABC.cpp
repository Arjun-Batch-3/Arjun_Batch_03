#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    getchar();
    char s[n+1] ;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    s[n]='\0';
    int c=0;
    int i=0;
    while(s[i]!='\0')
    {
      if(s[i]!='\0'&&s[i]=='A'&&s[i+1]!='\0'&&s[i+1]=='B'&&s[i+2]!='\0'&&s[i+2]=='C')
      {
          c++;
      }
      i++;
    }
    cout<<c<<endl;
    return 0;
}
