#include <bits/stdc++.h>

#define ld long double
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define PI ( acos(-1.0) )
#define IN freopen("input.txt","r",stdin)
#define OUT freopen("output.txt","w",stdout)
#define FOR(i,a,b) for(int i=a ; i<=b ; i++)
#define FORD(i,a,b) for(int i=a ; i>=b ; i--)
#define INF 1000000000
#define ll long long int
#define eps (1e-8)
#define sq(x) ( (x)*(x) )
#define all(x) x.begin(),x.end()
#define flog2(n) 64 - __builtin_clzll(n) - 1

using namespace std;

typedef pair < int, int > pii;
typedef pair < ll, ll > pll;
string s;
string res;
int main()
{//IN;
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    cin>>s;
    cout<<s[0];
    FOR (i,1,s.length()-1){
        if ((s[i]=='/' && s[i-1]!='/') || (s[i]!='/')) res+=s[i];
    }
    if (res[res.length()-1]=='/' ) {
        for (int i=0; i+1<res.length(); i++) cout<<res[i];
    }
    else cout<<res<<endl;;
         return 0;
}