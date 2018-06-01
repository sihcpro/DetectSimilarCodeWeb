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

ll n,a[100007],b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    FOR(i,1,n) cin>>a[i];
    b=a[1]%3;
    if (b==0) cout<<0;
    if (b==1) cout<<1;
    if (b==2)
    {
        if (n==1)
        {
            cout<<b;
            return 0;
        }
        if (a[2]%2==1) b=2;
        else b=1;
        cout<<b;
    }

}
