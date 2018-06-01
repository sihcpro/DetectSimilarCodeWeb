#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int tong=0,temp;
	int n;cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		temp=a[i]%10;
		a[i]/=10;
		tong+=pow(a[i],temp);
	}	
	cout<<tong;
}
