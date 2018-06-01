#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a, b;
	cin >> a >> b;
	if(a > 0 && b > 0){
		cout << "I";
	} else if(a > 0 && b < 0){
		cout << "IV";
	} else if(a < 0 && b > 0){
		cout << "II";
	} else cout << "III";
}