#include<iostream>
#include<algorithm>

using namespace std;
int n;
int a[1000005];
int main()
{
	cin>>n;
	for(int i = 1;i<=n;i++)cin>>a[i];
	sort(a+1,a+1+n);
	int res = max(a[1]*a[2],a[n-1]*a[n]);
	for(int i=1;i<=n-2;i++)
	{
		res = max(res,max(a[i]*a[n],a[i]*a[n-1]*a[n]));
	}
	for(int i=3;i<=n;i++)
	{
		res = max(res,max(a[i]*a[1]*a[2],a[i]*a[1]));
	}
	cout<<res;
	return 0;
}