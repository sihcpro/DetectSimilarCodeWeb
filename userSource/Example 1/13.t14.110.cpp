#include "bits/stdc++.h"
using namespace std;

int n, k;
const int maxN = 100005;
int a[maxN];

int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n);
	cout<<a[k-1];
	return 0;
}