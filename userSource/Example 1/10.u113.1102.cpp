#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k,a[3];
	cin >>n;
	cin>> a[1] ;
	if (n>1) cin>> a[2];
	if (n==1) cout << a[1]%3,0;
	if (a[1]%3==0 && n>1) cout << 0,0;
	if (a[1]%3==1 && n>1) cout << 1,0;
	if (a[1]%3==2 && n>1)
	 {
	 		if (a[2]%2==0 ) cout << 1,0;
	 		    else 
	 		      cout <<2,0;
	 }
	
     
}