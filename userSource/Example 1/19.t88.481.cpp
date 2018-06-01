#include <bits/stdc++.h>
#define sc scanf
#define pr printf
#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Ford(i,a,b) for(int i=(a); i>=(b); i--)
#define ll long long
using namespace std;
string s;
int i,j;

main() {
cin>>s;
i=0;
while (s[i]=='/') i++;
j=s.size()-1;
if (i!=0) pr("/");
while (s[j]=='/') j--;
For(h,i,j)
    if (s[h]!='/'||s[h-1]!='/') cout<<s[h];
}