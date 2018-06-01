100.0% of file 10.u7.58.cpp = 100.0% of file 10.t12.41.cpp

// ---------- 10.u7.58.cpp
/*copied */ #include<bits/stdc++.h>
/*copied */ 
/*copied */ using namespace std;
/*copied */ 
/*copied */ typedef long long ll;
/*copied */ 
/*copied */ ll N;
/*copied */ 
/*copied */ int arr[100008];
/*copied */ 
/*copied */ int main()
/*copied */ {
/*copied */ //	ios::sync_with_stdio(0);
/*copied */ //	cin.tie(NULL);
/*copied */ //	freopen("4.in", "r", stdin);
/*copied */ 	
/*copied */ 	cin >> N;
/*copied */ 	for(int i=0; i<N; i++)
/*copied */ 	{
/*copied */ 		cin >> arr[i];
/*copied */ 	}
/*copied */ 	
/*copied */ 	if(N==1)
/*copied */ 	{
/*copied */ 		cout << arr[0]%3;
/*copied */ 		return 0;
/*copied */ 	}
/*copied */ 	
/*copied */ 	if(arr[0]%3==0)
/*copied */ 	{
/*copied */ 		cout << 0;
/*copied */ 		return 0;
/*copied */ 	}
/*copied */ 	
/*copied */ 	if(arr[1]%2 == 0) arr[0] = 1;
/*copied */ 	cout << arr[0]%3;
            }
// ---------- end of 10.u7.58.cpp

#########################################################################################
// ---------- 10.t12.41.cpp
/*copied */ #include<bits/stdc++.h>
/*copied */ 
/*copied */ using namespace std;
/*copied */ 
/*copied */ typedef long long ll;
/*copied */ 
/*copied */ ll N;
/*copied */ 
/*copied */ int arr[100008];
/*copied */ 
/*copied */ int main()
/*copied */ {
/*copied */ //	ios::sync_with_stdio(0);
/*copied */ //	cin.tie(NULL);
/*copied */ //	freopen("4.in", "r", stdin);
/*copied */ 	
/*copied */ 	cin >> N;
/*copied */ 	for(int i=0; i<N; i++)
/*copied */ 	{
/*copied */ 		cin >> arr[i];
/*copied */ 	}
/*copied */ 	
/*copied */ 	if(N==1)
/*copied */ 	{
/*copied */ 		cout << arr[0]%3;
/*copied */ 		return 0;
/*copied */ 	}
/*copied */ 	
/*copied */ 	if(arr[0]%3==0)
/*copied */ 	{
/*copied */ 		cout << 0;
/*copied */ 		return 0;
/*copied */ 	}
/*copied */ 	
/*copied */ 	if(arr[1]%2 == 0) arr[0] = 1;
/*copied */ 	cout << arr[0]%3;
            }
// ---------- end of 10.t12.41.cpp

