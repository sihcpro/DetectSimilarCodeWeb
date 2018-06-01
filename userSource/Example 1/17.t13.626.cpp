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

ll xA,xB,xC,yA,yB,yC;
ll ABx,ABy,BCx,BCy;

int main()
{
    ios_base::sync_with_stdio(0);
	cin>>xA>>yA>>xB>>yB>>xC>>yC;
	ABx=xB-xA;
	ABy=yB-yA;
	BCx=xC-xB;
	BCy=yC-yB;
	ll tmp=ABx*BCy-ABy*BCx;
	if (tmp==0) cout<<"TOWARDS";
	else 
	if (tmp>0) cout<<"LEFT";
	else cout<<"RIGHT";
	return 0;
}