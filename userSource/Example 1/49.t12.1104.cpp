#include<bits/stdc++.h>

#define mk make_pair
#define pb push_back
#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MAXN = 1e5+7;

int x,y;

int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//	freopen("inp.in", "r", stdin);
	scanf("%d %d", &x, &y);
	if(x>0 && y>0) printf("I");
	else if(x>0 && y<0) printf("IV");
	else if(x<0 && y>0) printf("II");
	else if(x<0 && y<0) printf("III");
}