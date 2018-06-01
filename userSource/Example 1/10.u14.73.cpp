#include "bits/stdc++.h"
using namespace std;
const int maxN = 100005;
int a[maxN];
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	if(n == 1){
		cout<<a[0] % 3;
		return 0;
	}
	if(a[0] % 3 == 0){
		cout<<0;
		return 0;
	}
	if(a[0] % 3 == 1){
		cout<<1;
		return 0;
	}
	
	if(a[1] % 2 == 1){
		cout<<2;
		return 0;
	}
	else {
		cout<<1;
		return 0;
	}
	
	return 0;
}