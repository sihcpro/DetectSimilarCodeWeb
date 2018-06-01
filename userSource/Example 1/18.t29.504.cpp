#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,s;
	char c;
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	for (i=1;i<=4;i++)
	{
		for (j=1;j<=4;j++)
		{
			cin>>c;
			if (c=='#') a[i][j]=1;
				else a[i][j]=0;
		}
		//cin>>c;
	}
	for (i=1;i<4;i++)
		for (j=1;j<4;j++)
			{
				s=a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
				if (s==1||s==3||s==0||s==4) return cout<<"YES",0;
			}
	return cout<<"NO",0;
}