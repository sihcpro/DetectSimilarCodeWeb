#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	string r = "";
	int flag = 0;
	for(long long i = 0; i < s.length(); i++){
		if(s[i] == '/'){
			if(flag == 0){
				flag = 1;
				r += s[i];
			}
		} else {
			r += s[i];
			flag = 0;
		}
	}
	if(r[r.length() - 1] == '/'){
		if(r.length() == 1) cout << '/';
		else cout << r.substr(0, r.length() - 1);
	}
	else cout << r;
}