#include <bits/stdc++.h>
using namespace std;

#define mod 1e9+7
#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define FOR(i,a,b) for (int i = (a); i <= (b); i++)
#define FORE(i,a,b) for (int i = (a); i >= (b); i--)

typedef long long ll;
typedef pair<ll,ll> ii;
priority_queue <ll,vector<int>,greater<int> > heap_min;
ll mu(ll a, ll n)
{
    ll rs = a;
    FOR(i,1,n-1)
        rs*=a;
    return rs;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    ll kq = 0;
    cin >> n;
    while (n--)
    {
        ll res;
        cin >> res;
        kq += pow(res/10,res%10);
    }
    cout << kq;
    return 0;
}