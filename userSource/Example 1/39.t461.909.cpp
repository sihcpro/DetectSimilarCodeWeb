#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int tinh(int x){
	int m=x%10;
	x /= 10;
	return pow(x, m);
}

main(){
	int n, x, s = 0;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>x;
		s += tinh(x);
	}
	cout<<s<<endl;
}