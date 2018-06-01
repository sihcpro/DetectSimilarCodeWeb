#include <bits/stdc++.h>
#define ll long long
using namespace std;
map <ll,ll> vis;
int np[15];
ll n,res=0;
void xuli ()
{
    for (int i=0; i<10; i++)
    for (int j=0; j<10; j++)
    {
        ll ans=0;
        for (int k=1; k<=10; k++)
        {
            if (np[k]==0) ans=ans*10+i;
            else ans=ans*10+j;
            if (ans<=n && vis[ans]==0 && ans!=0)
            {
                //cout << ans << endl;
                res++;
                vis[ans]=1;
            }
        }
    }
}
void sinhnp (int x)
{
    if (x==11) xuli();
    else for (int i=0; i<2; i++)
    {
        np[x]=i;
        sinhnp(x+1);
    }
    return;
}
int main ()
{
    cin >> n;
    sinhnp(1);
    cout << res;
    return 0;
}