#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i,n,x=0;
	string a;

	getline(cin,a);
	for(i=0;i<a.length();i++)
	{
		while(a[i]=='/' && a[i+1]=='/')
		{
			a.erase(i+1,1);
		}
	}
	n= a.length();
	if(a[n-1]=='/' && n>1) a.erase(n-1,1);
	cout<<a;
	return 0;
}

