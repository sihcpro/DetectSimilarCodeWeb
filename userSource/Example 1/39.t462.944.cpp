#include <iostream>
#include <math.h>
using namespace std;
int tinh(int a[],int n){
	long sum=0;
	for(int i=0;i<n;i++){
		int tam=0;
		tam=a[i]%10;
		a[i]/=10;
		sum+=pow(a[i],tam);
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<tinh(a,n);
	return 0;
}
