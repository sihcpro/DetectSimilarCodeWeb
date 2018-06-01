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

ll n,m,c1,c2,n1,m1;
ll p[500007],q[500007],a[500007],b[500007],a1[500007],b1[500007],kt[500007],t=0;
ll mint=1e10;
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    cin>>c1>>c2;
    FOR(i,1,n) cin>>p[i];
    FOR(i,1,m) cin>>q[i];
    sort(q+1,q+1+m);
    sort(p+1,p+1+n);
    a[1]=p[1];
    a1[1]=1;
    n1=1;

    FOR(i,2,n)
    {
        if (p[i]>a[n1])
        {
            n1++;
            a[n1]=p[i];
            a1[n1]++;
        }
        else a1[n1]++;
    }
    b[1]=q[1];
    b1[1]=1;
    m1=1;
    FOR(i,2,m)
    {
        if (q[i]>b[m1])
        {
            m1++;
            b[m1]=q[i];
            b1[m1]++;
        }
        else b1[m1]++;
    }
    ll x=abs(c2-c1);
    ll j=1;
    FOR(i,1,n1)
    {
        while(b[j]<a[i]&&j<m1) j++;
        kt[i]=j;
        if (abs(a[i]-b[j])<mint) mint=abs(a[i]-b[j]);
        if (j-1>0 && abs(a[i]-b[j-1])<mint) mint=abs(a[i]-b[j-1]);
    }
    cout<<x+mint<<" ";
    FOR(i,1,n1)
    {
        if(abs(a[i]-b[kt[i]])==mint) t+=a1[i]*b1[kt[i]];
        if(kt[i]-1>0&&abs(a[i]-b[kt[i]-1])==mint) t+=a1[i]*b1[kt[i]-1];
    }
    cout<<t;
}