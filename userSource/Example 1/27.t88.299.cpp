#include <bits/stdc++.h>
#define sc scanf
#define pr printf
#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Ford(i,a,b) for(int i=(a); i>=(b); i--)
#define ll long long
using namespace std;
ll res,t,a[1001][1001],tmp,tam,N,M,b[1001][1001];

main() {
sc("%lld%lld",&N,&M);
For(i,1,N) For(j,1,M)sc("%lld",&a[i][j]);
For(i,1,N){
    tmp=0;
    For(j,1,M) if (a[i][j]>tmp){tmp=a[i][j];tam=j;}
    b[i][tam]=1;}
For(i,1,M){
    tmp=0;
    For(j,1,N) if(a[j][i]>tmp){tmp=a[j][i];tam=j;}
    b[tam][i]=1;}
res=0;
For(i,1,N) For(j,1,M) if(b[i][j]!=1)res=res+a[i][j];
pr("%lld",res);
}