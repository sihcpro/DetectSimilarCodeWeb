68.97% of file 13.t14.110.cpp = 83.33% of file 13.t12.84.cpp

// ---------- 13.t14.110.cpp
            #include "bits/stdc++.h"
            using namespace std;
            
            int n, k;
            const int maxN = 100005;
            int a[maxN];
            
            int main(){
/*copied */ 	cin>>n>>k;
/*copied */ 	for(int i=0;i<n;i++){
/*copied */ 		cin>>a[i];
/*copied */ 	}
/*copied */ 	sort(a, a+n);
/*copied */ 	cout<<a[k-1];
            	return 0;
            }
// ---------- end of 13.t14.110.cpp

#########################################################################################
// ---------- 13.t12.84.cpp
            #include<bits/stdc++.h>
            
            using namespace std;
            
            typedef long long ll;
            
            int n,k;
            int a[100000];
            int main()
            {
            //	ios::sync_with_stdio(0);
            //	cin.tie(NULL);
            //	freopen("inp.in", "r", stdin);
/*copied */ 	cin >> n >> k;
/*copied */ 	for(int i=0; i<n; i++){
/*copied */ 		cin >> a[i];
/*copied */ 	}
/*copied */ 	sort(a, a+n);
/*copied */ 	cout << a[k-1];
            
            }
// ---------- end of 13.t12.84.cpp

