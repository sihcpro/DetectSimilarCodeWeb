#include <bits/stdc++.h>
using namespace std;
int main()
{
	long kq,a[10005];
	int n,i;
	cin>>n;
	for (i=1;i<=n;i++) scanf("%ld",&a[i]);
	sort(a+1,a+n+1);
	kq=a[1]*a[2];
	kq=max(kq,a[n]*a[n-1]);
	kq=max(kq,a[1]*a[2]*a[n]);
	kq=max(kq,a[n]*a[n-1]*a[n-2]);
	cout<<kq;
	return 0;
}