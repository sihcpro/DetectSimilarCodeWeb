#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int a,b;
	cin>>a>>b;
	if (a>0&&b>0) cout<<"I";
	if (a<0&&b>0) cout<<"II";
	if (a<0&&b<0) cout<<"III";
	if (a>0&&b<0) cout<<"IV";
	return 0;
}