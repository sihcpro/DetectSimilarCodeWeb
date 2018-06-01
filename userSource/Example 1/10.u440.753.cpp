#include<iostream>

using namespace std;

int main(){
	long long n;cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(a[0]%3==0) cout<<"0";
	if((a[0]-1)%3==0) cout<<"1";
	if((a[0]-2)%3==0){
		if(a[1]%2==0 && n>=2) cout<<"1";
		else cout<<"2";
	}
	
}
