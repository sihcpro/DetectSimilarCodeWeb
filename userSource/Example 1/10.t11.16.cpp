#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100005];
int main()
{
    int n; cin >> n;
    for (int i=0; i<n; i++) scanf ("%lld",&a[i]);
    if (n==1)
    {
        cout << a[0]%3;
        return 0;
    }
    if (a[0]%3==0)
    {
        cout << 0;
        return 0;
    }
    else if (a[0]%3==1)
    {
        cout << 1;
        return 0;
    }
    else if (a[1]%2==0)
    {
        cout << 1;
        return 0;
    }
    else if (a[1]%2==1)
    {
        cout << 2;
        return 0;
    }

}