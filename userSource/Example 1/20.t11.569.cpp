#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=1000003,res=1;
int main ()
{
    int n;
    cin >> n;
    for (int i=1; i<n; i++)
    {
        res=res*3;
        res=res%mod;
    }
    cout << res;

}