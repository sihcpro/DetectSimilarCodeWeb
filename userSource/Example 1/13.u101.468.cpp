#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
	int i,n,k;
	long long a[100005];
    cin >> n >> k;
	for (i=0;i<n;i++)
	  cin>> a[i];
	sort(a,a+n);
    
      
	  cout << a[k-1];	
}
