#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	long long kq=1;
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>n;
	for (i=2;i<=n;i++) kq=(kq*3)%1000003;
	cout<<kq;
	return 0;
}