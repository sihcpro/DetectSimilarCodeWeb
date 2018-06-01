#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[10],b[10],xuat[10],nhiphan[10],x[10],res=0, mans[1000000];
int u=0;
map <ll,ll> visit;
void check (int m)
{
    ll ans=0;
    for (int i=1; i<=m; i++) ans=ans*10+xuat[i];

    //cout << ans << endl;
    if (ans<=1) return;
    if (visit[ans]==1) return;
    else
    {
        visit[ans]=1;
        mans[u++]=ans;
        for (int i=2; i<=sqrt(ans); i++) if (ans%i==0) return;
        //cout << ans << endl;
        res++;
        return;
    }

}
void hoanvi(int i, int m)
{
    for (int j=1; j<=m; j++)
    if(b[j])
    {
        xuat[i]=x[j];
        b[j]=0;
        if (i==m) check(m);
        else hoanvi(i+1,m);
        b[j]=1;
    }
}
void duyet (int n)
{
    int m=0;
    for (int i=1; i<=n; i++) if (nhiphan[i]==1) x[++m]=a[i], b[m]=1;
    hoanvi(1,m);
}
void sinhnp (int i, int n)
{
    for (int j=0; j<=1; j++)
    {
        nhiphan[i]=j;
        if (i==n) duyet(n);
        else sinhnp(i+1,n);
    }
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        res=0;
        string s;
        cin >> s;
        int n=s.size();
        for (int i=1; i<=n; i++) a[i]=s[i-1]-'0';
        sinhnp (1,n);
        cout << res << endl;
        for (int i=0; i<u; i++) visit[mans[i]]=0;
        u=0;
    }


}