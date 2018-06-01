#include <iostream>
using namespace std;
int xuly(int a[], int n)
{
	int max,am;
	if(a[n-1]<0) return a[0]*a[1];
	else if(a[n-2]<0) return a[0]*a[1]*a[n-1];
	else if(a[n-3]<0)
	{
		if(n>3) 
		{
			max= a[n-1]*a[n-2];
		    am=a[0]*a[1]*a[n-1];
		    if(max>am) return max ;else return am;
		}
		else
		{
			return a[n-1]*a[n-2];
		}
	}
	else 
	{
		if(n>4) 
		{
			max= a[n-1]*a[n-2]*a[n-3];
		    am=a[0]*a[1]*a[n-1];
		    if(max>am) return max ;else return am;
		}
		else
		{
			return a[n-1]*a[n-2]*a[n-3];
		}
	}
}
int main()
{
	int n,temp,i,j,kq;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[i])
			{
				temp= a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	kq= xuly(a,n);
	cout<<kq;
	return 0;
}
