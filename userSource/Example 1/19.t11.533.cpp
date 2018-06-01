#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
    int t=0;
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]!='/') cout << s[i], t=1;
        else if (s[i+1]!='/' && s[i+1]!= NULL ) cout << s[i],t=1;

    }
    if (t==0) cout << "/";
}