#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100005];
void Try ()
{
    priority_queue < ll, vector<ll>, greater<ll> > s;
    ll n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        ll x;
        scanf ("%lld",&x);
        s.push(x);
    }
    if (n==1)
    {
        cout << 0 << endl;
        return;
    }
    ll x1,x2,res=0;
    while (1)
    {
        x1=s.top(); s.pop(); res+=x1;
        ll x2=s.top(); s.pop(); res+=x2;
        if (s.empty())
        {
            cout << res << endl;
            return;
        }
        s.push(x1+x2);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Try();
    }
}