#include<bits/stdc++.h>


#define X  first
#define Y  second
typedef long long ll;

#define FOR(i,a,b) for(ll i = a;i<=b;i++)
#define FOD(i,a,b) for(ll i = a;i>=b;i--)
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<ll,ll>ii;
typedef priority_queue<ll,vector<ll>,greater<ll> > heap_min;

ll n,a[10007],t=0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    FOR(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    if (a[1]*a[2]>t) t=a[1]*a[2];
    if (a[1]*a[2]*a[n]>t) t=a[1]*a[2]*a[n];
    if (a[n]*a[n-1]*a[n-2]>t) t=a[n]*a[n-1]*a[n-2];
    if (a[n]*a[n-1]>t) t=a[n]*a[n-1];
    cout<<t;

}