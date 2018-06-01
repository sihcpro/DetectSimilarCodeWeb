#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll m,n,a,b;
int main ()
{
    //while (1){
    cin >> n >> m >> a >> b;
    int ac=(a%m==0)?m:a%m;
    int bc=(b%m==0)?m:b%m;
    int ad=(a+m-1)/m;
    int bd=(b+m-1)/m;
    //cout << ad << " " << bd << endl;
    if (m==1) cout << 1;

    else if (ac==1 && b==n) cout << 1;
    else if (ad==bd) cout << 1;
    else if (ac==1 && bc==m) cout << 1;

    else if (ac!=1 && b==n) cout << 2;
    else if (ac!=1 && bc==m) cout << 2;
    else if (ac==1 && bc!=m) cout << 2;
    else if (ac==bc+1) cout << 2;
    else if (ac!=1 && bc!=m && bd-ad==1) cout << 2;

    else cout << 3;
    //}
}