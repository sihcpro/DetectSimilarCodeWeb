#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
	long long n,m;cin>>n>>m;
	long long y1,y2;cin>>y1>>y2;
	long long a[n],b[m],k1=0,k2=0,h=1000000000,dem=0;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	while(k1<n && k2<m){
		if(abs(a[k1]-b[k2])<h){
			h=abs(a[k1]-b[k2]);
			dem=1;
		}else if(abs(a[k1]-b[k2])==h) dem++;
		if(a[k1]<=b[k2]) k1++;
		else k2++;
	}
	cout<<h+abs(y1-y2)<<" "<<dem;
}
