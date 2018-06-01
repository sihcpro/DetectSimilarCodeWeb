#include <bits/stdc++.h>

using namespace std;

long n, a, kq;

int main()
{
	cin >> n;
	while (n--){
		cin >> a;
		kq += pow(a/10, a%10);
	}
	cout << kq;
}