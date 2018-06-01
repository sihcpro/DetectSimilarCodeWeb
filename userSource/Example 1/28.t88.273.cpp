#include <bits/stdc++.h>
#define sc scanf
#define pr printf
#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Ford(i,a,b) for(int i=(a); i>=(b); i--)
#define ll long long

using namespace std;
int N,a[100001],d[500001],am,duong,t1,t2,res,x;

main() {
sc("%d",&N);
res=1;
For(i,1,N){
    sc("%d",&x);
    if (x<=0){am++;a[am]=x;}else {duong++;d[duong]=x;}
}
res=a[am]*d[1];
sort(a+1,a+am+1);
sort(d+1,d+duong+1);
if (am>=2) t1=a[1]*a[2];
if (duong>=2) t2=d[duong]*d[duong-1];
res=max(t1,res);res=max(t2,res);
if (duong>=3) {t2=t2*d[duong-2];}
if (duong>0) t1=t1*d[duong];
res=max(t1,res);res=max(t2,res);
pr("%d",res);
}