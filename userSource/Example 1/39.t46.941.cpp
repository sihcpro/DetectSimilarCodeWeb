#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{	cin>>a[i];
	}
	int S=0;
	for(int i=0;i<n;i++)
	{
		int tich=1,tam=a[i]/10;
		int k=a[i]%10;
		for(int j=0;j<k;j++)
		{	
			tich=tich*tam;
		}
		S=S+tich;
	}
	cout<<S;
	
	 
}