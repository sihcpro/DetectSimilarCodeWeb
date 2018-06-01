#include <bits/stdc++.h>
using namespace std;
int p[400005],a[100005];
void build(int d,int l,int r)
{
	if ( l==r) p[d]=a[l];
		else
	 	{
			int m=(l+r)/2;
			build(2*d,l,m);
			build(2*d+1,m+1,r);
			p[d]=min(p[d*2],p[d*2+1]);
		}
}
int get(int d, int l, int r, int u, int v) 
{
    if (v < l || r < u) {
        return 2000000000;
    }
    if (u <= l && r <= v) {
        return p[d];
    }
    int mid = (l + r) / 2;
    return min(get(d*2, l,mid,u,v),get(d*2+1,mid+1,r,u,v));
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int i,n,k,u,v;
	cin>>n>>k;
	for(i=1;i<=n;i++) cin>>a[i];
	build(1,1,n);
	while(k)
	{
		k--;
		cin>>u>>v;
		cout<<get(1,1,n,u,v)<<endl;
	}
	return 0;
}