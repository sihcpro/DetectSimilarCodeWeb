#include<bits/stdc++.h>


#define X  first
#define Y  second
typedef long long ll;

#define FOR(i,a,b) for(ll i = a;i<=b;i++)
#define FOD(i,a,b) for(ll i = a;i>=b;i--)
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<ll,ll>ii;
typedef priority_queue<ll,vector<ll>,greater<ll> > heap_min;
const ll maxN = 1e6+5;
const ll inf = 1e10;
const ll mod = 1e9+7;

ll n;
char a[10][10];

void xuly()
{
	ll soX=0,so0=0;
	ll win=0,next=0,winX=0,win0=0;
	FOR(i,1,3)
	{
		FOR(j,1,3)
		{
			cin>>a[i][j];
			if (a[i][j]=='X') soX++;
			else
			if (a[i][j]=='0') so0++;
		}
	}
	if (soX<so0 || soX-so0>1)
	{
		cout<<"illegal";
		return;
	}
	if (soX>so0) next=2;
	else next=1;
	FOR(i,1,3)
	{
		if (a[i][1]==a[i][2] && a[i][2]==a[i][3])
		{
			if (a[i][1]=='X') winX++;
			else 
			if (a[i][1]=='0') win0++;
		}
	}
	FOR(j,1,3)
	{
		if (a[1][j]==a[2][j] && a[2][j]==a[3][j])
		{
			if (a[1][j]=='X') winX++;
			else
			if (a[1][j]=='0') win0++;
		}
	}
	if (a[1][1]==a[2][2] && a[2][2]==a[3][3])
	{
		if (a[1][1]=='X') winX++;
		else
		if (a[1][1]=='0') win0++;
	}
	if (a[1][3]==a[2][2] && a[2][2]==a[3][1])
	{
		if (a[1][3]=='X') winX++;
		else
		if (a[1][3]=='0') win0++;
	}
	if (winX>0 && win0>0)
	{
		cout<<"illegal";
		return;
	}
	if (winX==0 && win0==0)
	{
		if (soX+so0==9)
		{
			cout<<"draw";
			return;
		}
		if (next==1) cout<<"first";
		else cout<<"second";
		return;
	}
	if (winX>0) win=1;
	else win=2;
	if (win==next)
	{
		cout<<"illegal";
		return;
	}
	if (win==1)
	{
		cout<<"the first player won";
		return;
	}
	else
	{
		cout<<"the second player won";
		return;
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    while (n--)
    {
    	xuly();
		cout<<endl;
	}
	return 0;
}