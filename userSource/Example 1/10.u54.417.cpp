#include <iostream>
using namespace std;
int xuly(int a[], int n)
{
	if(n==1) return a[0]%3;
	if(a[0]%3==0) return 0;
	if(a[0]%3==1) return 1;
	if(a[1]%2==0) return 1;
	else return 2;
}
int main()
{
	int n,i,kq;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
    kq= xuly(a,n);
	cout<<kq;
	return 0;
}
