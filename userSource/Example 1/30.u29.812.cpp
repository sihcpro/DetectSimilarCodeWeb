#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long s,kt,kq;
	kq=0;
	s=0;
	kt=-1;
	while (kt<=n)
	{
		kq++;
		s=s+kq;
		kt=kt+s+kq;
	}
	return cout<<kq-1,0;
}

