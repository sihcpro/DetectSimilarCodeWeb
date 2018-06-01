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

ll n,m,a[1007][1007],kt[1007][1007],cmax[1007],hmax[1007],x,kq=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    FOR(i,1,n)
    {
        FOR(j,1,m)
        {
            cin>>a[i][j];
            if (a[i][j]>hmax[i])
            {
                hmax[i]=a[i][j];
                x=j;
            }
        }
        kt[i][x]=1;
    }
    FOR(i,1,m)
    {
        FOR(j,1,n)
        {
            if (a[j][i]>cmax[i])
            {
                cmax[i]=a[j][i];
                x=j;
            }
        }
        kt[x][i]=1;
    }
    FOR(i,1,n)
        FOR(j,1,m)
            if (kt[i][j]!=1) kq+=a[i][j];
    cout<<kq;
}