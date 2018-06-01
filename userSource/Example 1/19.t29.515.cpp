#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,kq="";
	long i,d;
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>s;
	d=s.length()-1;
	while(s[d]=='/') d--;
	kq+=s[0];
	for (i=1;i<d;i++)
		if (s[i]!='/'||(s[i]=='/'&&s[i-1]!='/')) kq+=s[i];
	kq+=s[d];
	cout<<kq;
	return 0;
}

