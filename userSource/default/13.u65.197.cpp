#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100005];
int n,k;
int main()
{
    cin >> n >> k;
    for (int i=0; i<n; i++)
    {
        scanf ("%lld",&a[i]);

    }
    sort (a,a+n);
    cout << a[k-1];
}