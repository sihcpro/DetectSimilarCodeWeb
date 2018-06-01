#include <bits/stdc++.h>
using namespace std;
int main()
{
	long i,n,a[5];
	cin>>n;
	cin>>a[1];
	if (n==1) return cout<<a[1]%3,0;
	cin>>a[2];
	if (a[1]%3==0) return cout<<0,0;
	if (a[1]%3==1) return cout<<1,0;
	if (a[2]%2==0) return cout<<1,0;
	return cout<<2,0;
}
