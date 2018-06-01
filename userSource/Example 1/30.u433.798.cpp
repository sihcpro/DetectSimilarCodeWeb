#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long n,t = 0;
    cin >> n;
    long long l = 1,r = 3634238,m,vt;
    if (n == 0)
        cout << 0;
    else
    {
        while (l <= r)
        {
            m = (l+r)/2;
            t = (m*(m+1)/2*(2*m+1)/3 + (m+1)*m/2)/2 + m*(m+1)/2 - 1;
            if (t <= n)
            {
                vt = m;
                l = m+1;
            }
            else
                r = m-1;
        }
        cout << vt;
    }
    return 0;
}