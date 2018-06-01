#include<iostream>
#include<string>

using namespace std;
int main(){
	char a[101];
	cin>>a;
	
	int k=0,khoa=0;
	while(a[k]) k++;
	for(int i=k-1;i>=0;i--) if(a[i]!=47){k=i+1;break;}
	for(int i=0;i<k;i++){
		if(a[i]!=47) khoa=0;
		if(a[i]==47 && khoa==1) continue;
		if(a[i]==47 && khoa==0) khoa=1;
		cout<<a[i];
	}
}
