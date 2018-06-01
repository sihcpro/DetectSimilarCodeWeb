#include <bits/stdc++.h>
using namespace std;
long a[500005],b[500005];
int main()
{
	long i,j,n,m,kq=2000000000,dem=0,c1,c2;
	cin>>n>>m;
	cin>>c1>>c2;
	for (i=1;i<=n;i++) scanf("%ld",&a[i]);
	for (i=1;i<=m;i++) scanf("%ld",&b[i]);
	sort(a+1,a+n+1);
	sort(b+1,b+m+1);
	i=1,j=1;
    while (i<=n && j<=m)
    {
        if (abs(a[i]-b[j])<kq)
        {
            dem=1;
            kq=abs(a[i]-b[j]);
        }
        	else if (abs(a[i]-b[j])==kq) dem++;
        if (a[i]<=b[j]) i++;
        	else j++;
    }
	cout<<kq+abs(c1-c2)<<" "<<dem;
	return 0;
}