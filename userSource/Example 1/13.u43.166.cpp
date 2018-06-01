#include <iostream>
using namespace std;



int kNum(int * a,int k,int n){
	for(int i=0;i<k;i++){
		for(int j=n-2;j>=i;j--) if(a[j]>a[j+1]){
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	return a[k-1];
}
main(){
	int n,k;
	cin>>n>>k;
	int* a=new int[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	cout<<kNum(a,k,n);
}