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
char c[10][10];
int a[10][10];

bool check (int b[10][10]){
    FOR (i,1,4){
        FOR (j,1,4){
            if (b[i][j]==b[i+1][j] && b[i][j]==b[i][j+1] && b[i][j]==b[i+1][j+1])
            {return 1;}
        }
    }
    return 0;
}

int b[10][10];

int main()
{//IN;
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    FOR (i,1,4) FOR (j,1,4) cin>>c[i][j];

    FOR (i,1,4) FOR (j,1,4) if (c[i][j]=='.') a[i][j]=2; else a[i][j]=1;

    bool q;

    if (check(a)) {
        cout<<"YES"; return 0;
    }
    FOR (i,1,4){
        FOR (j,1,4){
            FOR (ii,1,4){
                FOR (jj,1,4){
                    if (ii==i && jj==j) {
                        if (a[ii][jj]==1) b[ii][jj]=2;
                        else b[ii][jj]=1;
                    }
                    else b[ii][jj]=a[ii][jj];
                }
            }
            if (check(b)){
                cout<<"YES"; return 0;
            }
        }
    }
    cout<<"NO";

         return 0;
}