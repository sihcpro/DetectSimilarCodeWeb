#include <bits/stdc++.h>
using namespace std;
short d,a[10];
bool kt[10];
long s;
set <long> kq;
bool nt(long i)
{
	if (i<2) return false;
	for (int j=2;j<=sqrt(i);j++)
		if (i%j==0) return false;
	return true;
}
void dq(short i)
{
	if (i<=d)
	{
		for (int j=1;j<=d;j++)
			if (kt[j]==false)
			{
				kt[j]=true;
				s=s*10+a[j];
				if (nt(s)==true) kq.insert(s);
				dq(i+1);
				kt[j]=false;
				s=s/10;
			}
	}
}
int main()
{
	ios::sync_with_stdio(0);
    cin.tie(NULL);
    string n;
    int i,t;
    cin>>t;
    while(t)
    {
    	t--;
		cin>>n;
		memset(kt,sizeof(kt),false);
		memset(a,sizeof(a),0);
		d=n.length();s=0;
		for (i=1;i<=d;i++) a[i]=n[i-1]-48;
		dq(1);
		cout<<kq.size()<<endl;
		kq.clear();
	}
}
