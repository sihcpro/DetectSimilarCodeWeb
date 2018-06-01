#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll N;

int arr[100008];

int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//	freopen("4.in", "r", stdin);
	
	cin >> N;
	for(int i=0; i<N; i++)
	{
		cin >> arr[i];
	}
	
	if(N==1)
	{
		cout << arr[0]%3;
		return 0;
	}
	
	if(arr[0]%3==0)
	{
		cout << 0;
		return 0;
	}
	
	if(arr[1]%2 == 0) arr[0] = 1;
	cout << arr[0]%3;
}