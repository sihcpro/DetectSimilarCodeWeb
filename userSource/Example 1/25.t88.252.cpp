#include <bits/stdc++.h>
#define sc scanf
#define pr printf
#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Ford(i,a,b) for(int i=(a); i>=(b); i--)
#define ll long long
using namespace std;
int N,M,e1,e2,a[500001],b[500001],pos,res,d;

main() {
sc("%d%d",&N,&M);
sc("%d%d",&e1,&e2);
For(i,1,N) sc("%d",&a[i]);
For(i,1,M) sc("%d",&b[i]);
sort(a+1,a+N+1);sort(b+1,b+M+1);
For(i,1,M) if (b[i]<=a[1]) pos=i;
res=1000000000;d = 0;
For(i,1,N){
    while (pos<M&&b[pos+1]<=a[i]) pos++;
    if (pos>0){
            if (abs(e1-e2)+abs(a[i]-b[pos])==res) d++;
                else if (abs(e1-e2)+abs(a[i]-b[pos])<res){d=1;res=abs(e1-e2)+abs(a[i]-b[pos]);}
    }
    if (pos<M){
            if (abs(e1-e2)+abs(a[i]-b[pos+1])==res) d++;
                else if (abs(e1-e2)+abs(a[i]-b[pos+1])<res){d=1;res=abs(e1-e2)+abs(a[i]-b[pos+1]);}
    }
}
pr("%d %d",res,d);
}