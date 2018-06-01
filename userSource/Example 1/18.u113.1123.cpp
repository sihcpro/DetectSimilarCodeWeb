#include <bits/stdc++.h>
using namespace std;
int xuly(char a[][4])
{   int i ,j,d1=0,d2=0;
	for (i=0;i<3;i++)
	    for (j=0;j<3;j++)
	         {  
	             if ( (a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1]!=2)) return 1;
	           
			 }

	    return 0;
}
int main()
{
	int i,j,d=0;
	char x,a[4][4];
	for (i=0;i<4;i++)
	    for (j=0;j<4;j++)
	    {
		      cin>>a[i][j];
		      if  (a[i][j]=='#') a[i][j]=1;
		         else a[i][j]=0;
     	}
     if (xuly(a)==1) cout<< "YES";
       else cout<< "NO";
}