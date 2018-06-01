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
    if (a[node].R<st || a[node].L>en)   return 100000000000000000;
    if (a[node].L>=st && a[node].R<=en)   return a[node].Min;
    else
    {
        ll u,v;
        u=find_min(st,en,a[node].childL);
        v=find_min(st,en,a[node].childR);
        return min(u,v);
    }
}
void update (ll node, ll l, ll r, ll id, ll val)
{
    if (id > r || id < l) return;
    if(l==r)
    {
        a[node].Min = val;
        return;
    }
    ll mid = (l+r)/2;
    update(a[node].childL,l,mid,id,val);
    update(a[node].childR,mid+1,r,id,val);
    a[node].Min=min(a[a[node].childL].Min, a[a[node].childR].Min);
}
int main()
{
    //freopen ("in.in","r",stdin);
    scanf ("%lld %lld",&n,&q);
    for (ll i=1; i<=n; i++)scanf ("%lld",&nhap[i]);
    build(1,1,n);
    for (ll i=0; i<q; i++)
    {
        int x; cin >> x;
        scanf ("%lld %lld",&st,&en);
        if (x==1) cout << find_min(st,en,1) << endl;
        else update(1,1,n,st,en);
    }
    return 0;
}