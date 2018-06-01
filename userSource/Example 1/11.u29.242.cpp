#include <bits/stdc++.h>
using namespace std;
long long kq,x,t;
int main()
{
	priority_queue<long long , vector <long long> , greater<long long> > h ;
	int n,i,d;
	cin>>d;
	while(d)
	{
		d--;
		kq=0;
		cin>>n;
		for (i=1;i<=n;i++) 
		{
			scanf("%I64d",&x);
			h.push(x);
		}
		while (h.size()>1)	
		{
			t=h.top();
			h.pop();
			t+=h.top();
			h.pop();
			kq+=t;
			h.push(t);
		}
		h.pop();
		cout<<kq<<endl;
	}
}
