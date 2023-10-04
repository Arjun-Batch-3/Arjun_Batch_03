
#include<bits/stdc++.h>
using namespace std;

int main() {



        string s;
        getline(cin, s);
        vector<char>st;

        int i=0,j=0;
while(s[i]!='\0')
{
 if(i%2==0)
 {
     st.push_back(s[i]);

 }
 i++;
}
st.push_back('\0');
while(st[j]!='\0')
{
    cout<<st[j];
    j++;
}
    return 0;
}
