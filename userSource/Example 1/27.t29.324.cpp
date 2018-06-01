#include <bits/stdc++.h>
using namespace std;
long a[1005][1005];
bool kt[1005][1005];
int main()
{
	long long kq=0;
	long n,m,i,j,ma,x,y;
	cin>>n>>m;
	for (i=1;i<=n;i++)
	{	
		ma=-1;
		for (j=1;j<=m;j++)
		{
			scanf("%ld",&a[i][j]);
			if (ma<a[i][j])
			{
				ma=a[i][j];
				x=i;y=j;
			}
			kq+=a[i][j];	
		}
		kt[x][y]=true;
		kq-=ma;
	}
	for (j=1;j<=m;j++)
	{	
		ma=-1;
		for (i=1;i<=n;i++) 	
		if (ma<a[i][j])
			{
				ma=a[i][j];
				x=i;y=j;
			}
		if (kt[x][y]==false) kq-=ma;
	}
	cout<<kq;
	return 0;
}