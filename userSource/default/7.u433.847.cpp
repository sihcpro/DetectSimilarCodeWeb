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


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    double n, res;
    cin >> n;
    res = sqrt(2*n)/(2+2*sqrt(3)+2*sqrt(2));
    printf("%.4f",res);
    return 0;
}