#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tong=0;
    int n; cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        long long m=a%10, n=a/10,p=1;
        if (m==0) n=1;
        else
        {
            for (int i=1; i<=m; i++) {p*=n;}
        }
        tong+=p;
    }
    cout << tong;
    return 0;
}