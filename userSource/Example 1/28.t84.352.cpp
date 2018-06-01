#include<bits/stdc++.h>
using namespace std;

int a[10010];
int main()
{
	int n, result;
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	
	if (a[n-1]<0) {
		result = a[0]*a[1];
		cout<<result;
		return 0;
	}

	if (a[0]>0) {
		result = a[n-2]*a[n-1]*a[n-3];
		cout<<result;
		return 0;
	}
	
	int tichAm = a[0]*a[1]*a[n-1];
	int tichDuong = max(a[n-1]*a[n-2], a[n-1]*a[n-2]*a[n-3]);
	
	result = (tichAm>tichDuong)?tichAm:tichDuong;
	cout<<result;
	return 0;
}
    
