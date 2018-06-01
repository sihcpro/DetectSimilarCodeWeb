#include <bits/stdc++.h>
using namespace std;
long a[100005];
int main()
{
	long n,k,i;
	cin>>n;
	cin>>k;
	for (i=1;i<=n;i++) scanf("%ld",&a[i]);
	sort(a+1,a+n+1);
	cout<<a[k];
}