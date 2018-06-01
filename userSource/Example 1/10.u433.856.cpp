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
priority_queue <ll,vector<ll>,greater<ll> > heap_min;

ll n, a[100005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin >> n;
    FOR(i,1,n)
        cin >> a[i];
    if (a[1] % 3 == 2)
    {
        if (n == 1)
            cout << 2;
        else
            if (a[2] % 2 == 0)
                cout << 1;
            else
                cout << 2;
    }
    else
        cout << a[1] % 3;
    return 0;
}