#include <iostream>
using namespace std;



int pow3(int n,int * a){
	a[0]=a[0]%3;
	if(a[0]<2||n<2) return a[0];
	else{
		if(a[1]%2==0) return 1;
		else return 2;
	}
}
main(){
	int n;
	cin>>n;
	int* a=new int[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	cout<<pow3(n,a);
	
}
