#include <bits/stdc++.h>
#define sc scanf
#define pr printf
#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Ford(i,a,b) for(int i=(a); i>=(b); i--)
#define ll long long
using namespace std;
ll f[1001],a[1001],b[1001],n,tmp,mod;

main() {
sc("%lld",&n);
f[1]=2;
mod=1000003;
For(i,2,1000) f[i]=(f[i-1]*2)%mod;
a[1]=3;
b[1]=0;For(i,2,n){
    tmp=(f[i]*f[i-1])%mod-f[i-1];
    tmp=(tmp%mod+mod)%mod;
    tmp=(tmp+f[i])%mod;
    a[i]=tmp+a[i-1]+b[i-1]*2;
    a[i]=a[i]%mod;
    b[i]=((a[i]-tmp)%mod+mod)%mod;
}
tmp = (f[n]*f[n]) %mod-a[n];
tmp = (tmp%mod+mod) %mod;
if (n==0) pr("1"); else
pr("%lld",tmp);
}