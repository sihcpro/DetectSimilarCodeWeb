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


struct state{
    int city, type;
    state(){};
    state(int a, int b){
        city=a; type=b;
    }
};

typedef pair < state, int > SI;
typedef pair < int , state > IS;

map<string,int>city;
map<string,int> type;
ll c[500];

vector<SI> v[500][5];
bool operator > (IS a, IS b){
    return a.first>b.first;
}

priority_queue<IS, vector<IS> , greater<IS> > pq;

int d[500][5];

void djk(state a) {
    FOR (i,1,405){
        FOR (j,0,3) d[i][j]=INF;
    }
    d[a.city][a.type]=0;
    pq.push(IS(0,a));
    while (pq.size()) {
        auto u=pq.top();
        pq.pop();
        //cout<<u.second.city<<" "<<u.second.type<<" "<<u.first<<endl;

        if (u.first!=d[u.second.city][u.second.type]) continue;
        for (auto i:v[u.second.city][u.second.type]){
            state b=i.first;
            int e=i.second;
            //cout<<u.second.city<<" "<<u.second.type<<" "<<b.city<<" "<<b.type<<" "<<e<<" "<<endl;
            if (d[u.second.city][u.second.type]+e<d[b.city][b.type]){
                d[b.city][b.type]=d[u.second.city][u.second.type]+e;
                pq.push(IS(d[b.city][b.type],b));
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    type["AIR"]=0;
    type["SEA"]=1;
    type["RAIL"]=2;
    type["TRUCK"]=3;
    int t;
    cin>>t;
    FOR (tt,1,t){
        int n;
        cin>>n;
        city.clear();
        FOR (i,1,400){
            FOR (j,0,3) v[i][j].clear();
        }
        FOR (i,1,n){
            string s;
            int a;
            cin>>s>>a;
            city[s]=i;
            c[i]=a;
        }

        int m;
        cin>>m;
        FOR (i,1,m){
            string a,b,c; int vv;
            cin>>a>>b>>c>>vv;
            int p=city[a];
            int q=city[b];
            int r=type[c];
            //cout<<p<<" "<<q<<" "<<r<<endl;
            v[p][r].pb(SI(state(q,r),vv));
            v[q][r].pb(SI(state(p,r),vv));
        }
        FOR (i,1,n){
            FOR (j,0,3){
                FOR (z,1,3){
                    v[i][j].pb(SI(state(i,(j+z)%4),c[i]));
                }
            }
        }
        //for (auto i: v[4][0]) cout<<i.first.city<<" "<<i.first.type<<endl;

        string dau,cuoi;
        cin>>dau>>cuoi;
        int s=city[dau];
        int t=city[cuoi];
        int res=INF;
        FOR (i,0,3){
            djk(state(s,i));
            FOR (j,0,3){
                res=min(res,d[t][j]);
            }
        }
        cout<<res<<endl;
    }



         return 0;
}