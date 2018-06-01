#include <bits/stdc++.h>
using namespace std;
map<long long, long long> ma;
map<long long, long long>::iterator it;
void add(long long w){
	it = ma.find(w);
	if(it == ma.end()){
		ma.insert(pair<long long, long long>(w, 1));
//		cout << "New " << w << endl;
	} else {
		it->second = it->second + 1;
//		cout << "Now " << w << " | " << it->second << endl;
	}
}
int main(){
	long long n, m;
	long long c1, c2;
	cin >> n >> m >> c1 >> c2;
	long long *a = new long long[n + 1];
	long long *b = new long long[m + 1];
	a[n] = 10e9;
	b[m] = 10e9;
	for(long long i = 0; i < n; i++){
		scanf("%lld", (a + i));
	}
	for(long long i = 0; i < m; i++){
		scanf("%lld", (b + i));
	}
	sort(a, a + n);
	sort(b, b + m);
	long long fi = 0, se = 0;
	while(1){
		if(a[fi] == 10e9 && b[se] == 10e9) break;
		if(a[fi] <= b[se]){
//			cout << "Check " << b[se] << " & " << a[fi] << ": ";
			if(a[fi] == 10e9 || b[se] == 10e9){
				fi++;
				continue;
			}
			add(b[se] - a[fi]);
			fi++;
		} else {
//			cout << "Check " << b[se] << " & " << a[fi] << ": ";
			if(a[fi] == 10e9 || b[se] == 10e9){
				se++;
				continue;
			}
			add(a[fi] - b[se]);
			se++;
		}
	}
	long long minx = 10e9;
	map<long long, long long>::iterator mit;
	for(it = ma.begin(); it != ma.end(); it++){
		if(it->first < minx){
			minx = it->first;
			mit = it;
		}
	}
	cout << (minx + max(c1, c2) - min(c1, c2)) << " " << mit->second;
}