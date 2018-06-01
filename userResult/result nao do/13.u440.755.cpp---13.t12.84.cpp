82.0% of file 13.u440.755.cpp = 85.42% of file 13.t12.84.cpp

// ---------- 13.u440.755.cpp
/*copied */ #include<iostream>
/*copied */ #include<algorithm>
/*copied */ 
/*copied */ using namespace std;
/*copied */ 
/*copied */ int main(){
/*copied */ 	int n;cin>>n;
/*copied */ 	int k;cin>>k;
/*copied */ 	int a[n];
/*copied */ 	for(int i=0;i<n;i++){
/*copied */ 		cin>>a[i];
/*copied */ 	}
/*copied */ 	sort(a,a+n);
/*copied */ 	cout<<a[k-1];
            }

// ---------- end of 13.u440.755.cpp

#########################################################################################
// ---------- 13.t12.84.cpp
/*copied */ #include<bits/stdc++.h>
/*copied */ 
/*copied */ using namespace std;
/*copied */ 
/*copied */ typedef long long ll;
/*copied */ 
/*copied */ int n,k;
/*copied */ int a[100000];
/*copied */ int main()
/*copied */ {
/*copied */ //	ios::sync_with_stdio(0);
/*copied */ //	cin.tie(NULL);
/*copied */ //	freopen("inp.in", "r", stdin);
/*copied */ 	cin >> n >> k;
/*copied */ 	for(int i=0; i<n; i++){
/*copied */ 		cin >> a[i];
/*copied */ 	}
/*copied */ 	sort(a, a+n);
/*copied */ 	cout << a[k-1];
            
            }
// ---------- end of 13.t12.84.cpp

