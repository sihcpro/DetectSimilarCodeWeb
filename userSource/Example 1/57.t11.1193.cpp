#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,q,numNode=1,st,en, nhap[1000010];
struct N
{
    ll childL,childR;
    ll L,R;
    ll Min;
} a[2000010];

void build (ll node, ll l, ll r)
{
    a[node].L=l;
    a[node].R=r;
    if (l==r)
    {
        a[node].Min=nhap[l];
        return;
    }
    ll mid=(l+r)/2;

    a[node].childL=++numNode;
    build(numNode,l,mid);

    a[node].childR=++numNode;
    build(numNode,mid+1,r);

    a[node].Min=min(a[a[node].childL].Min, a[a[node].childR].Min);
    return;
}
ll find_min (ll st, ll en, ll node)
{
    if (a[node].R<st || a[node].L>en)   return 10000000;
    if (a[node].L>=st && a[node].R<=en)   return a[node].Min;
    else
    {
        ll u,v;
        u=find_min(st,en,a[node].childL);
        v=find_min(st,en,a[node].childR);
        return min(u,v);
    }
}

int main()
{

    scanf ("%lld %lld",&n,&q);
    for (ll i=1; i<=n; i++)scanf ("%lld",&nhap[i]);
    build(1,1,n);
    for (ll i=0; i<q; i++)
    {
        scanf ("%lld %lld",&st,&en);
        cout << find_min(st,en,1) << endl;
    }
    return 0;
}