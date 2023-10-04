
#include<bits/stdc++.h>
using namespace std;

int main() {



        string s;
        getline(cin, s);
     vector<int>c(26,0);
     int i=0;
     while(s[i]!='\0')
     {
       c[s[i]-'a']++;
       i++;
     }
     int f1,f=0;
    for(int i=0;i<26;i++)
    {
        if(c[i]==0)
        {
           f1=i; f=1;break;
        }
    }
    if(f!=0)
    cout<<(char)('a'+f1)<<endl;
    else
        cout<<"None"<<endl;

    return 0;
}
