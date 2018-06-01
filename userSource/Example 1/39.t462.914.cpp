#include <bits/stdc++.h>
//#include <conio.h>
using namespace std;
int main(){
	int t; cin>>t;
	int n;
	long long s=0;
	while (t--){
		cin>>n;
		s+=pow(n/10,n%10);
	}
	cout<<s;
	
//	getch();
}
/*
1. ((()))
2. (()())
3. (())()
4. ()(())
5. ()()()
*/
