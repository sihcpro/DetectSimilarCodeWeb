#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll M=1000000007;
map <ll,ll> a;
ll mu (ll n)
{
    if (n==0) return 1;
    if (n==1) return 3;
    if (a[n/2]==0) a[n/2]=mu(n/2);
    if (n%2==0) return (a[n/2]*a[n/2])%M;
    else return 3*(a[n/2]*a[n/2])%M;
}
int main()
{
    ll n;
    cin >> n;
    for (int i=1; i<M; i*=2) a[i]=0;
    cout << mu(n-1);
    return 0;
}