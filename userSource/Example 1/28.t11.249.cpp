#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[10005];

int main()
{
    cin>>n;
    for (int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    ll x,y,z,t,res=0;
    x=a[n-1]*a[n-2];
    y=x*a[n-3];
    z=a[0]*a[1];
    t=a[0]*a[1]*a[n-1];
    res=max(max(max(x,y),z),t);
    cout<<res;
	return 0;
}