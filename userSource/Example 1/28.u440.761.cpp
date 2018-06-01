#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int a1=a[0]*a[1];
	int a2=a[0]*a[1]*a[n-1];
	int a3=a[n-2]*a[n-1];
	int a4=a[n-3]*a[n-2]*a[n-1];
	cout<<max(a1,max(a2,max(a3,a4)));
}
