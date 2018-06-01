#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll c;
bool prime[10000000];
bool visited[10000000];
void sang(int n)
{
    memset(prime, true, sizeof(prime));
    prime[1] = 0;
    prime[0] = 0;
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}


int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//	freopen("inp.in", "r", stdin);
	cin >> c;
	
	sang(10000000);
	for(int i=0; i<c; i++)
	{
		vector<int> v;
		string a;	
		ll ans = 0;
		cin >> a;
//		while(a>0){
//			v.push_back(a%10);
//			a/=10;
//		}
		for(int i=0; i<a.length(); i++)
		{
			v.push_back(a[i]-'0');
		}
		sort(v.begin(), v.end());
		do
		{
			ll k = 0;
			for(int i=0; i<v.size(); i++)
			{
				k = k*10 + v[i];
				
				if(prime[k] && !visited[k]) {
//					cout << "k = " << k << endl;
					ans++;
				}
				visited[k] = 1;
			}

		} while(next_permutation(v.begin(), v.end()));
		memset(visited, 0, sizeof(visited));
		cout << ans << endl;
	}
}