#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
	int n,a[100005];
	long long x1,x2,x3,x4;
	cin >> n;
	for (int i=0;i<n;i++)
	{
	
	  cin >> a[i];
     
     }
	sort(a,a+n);
	x1=a[0]*a[1];
	x2=a[0]*a[1]*a[n-1];
	x3=a[n-1]*a[n-2];
	x4=a[n-1]*a[n-2]*a[n-3];
	cout <<(max(x1,max(x2,max(x3,x4))));
	
}