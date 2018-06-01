#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	int i,j,x;
	long d;
	string s,kq="";
	cin >> s;
	d = s.length()-1;
	while (s[d]=='/') d--; 
	kq+=s[0];
	for (i=1;i<d;i++)
	   if (s[i]!='/'||( s[i]=='/' && s[i-1]!='/'))
	      kq+=s[i];
   kq+=s[d];
	cout << kq;
	
}