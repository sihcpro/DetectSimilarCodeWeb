61.9% of file 13.u61.169.cpp = 82.98% of file 13.u101.468.cpp

// ---------- 13.u61.169.cpp
            #include <iostream>
            #include <algorithm>
            using namespace std;
            
            int a[100010];
            int main() {
            	ios::sync_with_stdio(0);
/*copied */ 	int n, k; cin >> n >> k;
/*copied */ 	for (int i = 0; i < n; i++) cin >> a[i];
/*copied */ 	sort(a, a+n);
/*copied */ 	cout << a[k-1];
            	return 0;
            }
// ---------- end of 13.u61.169.cpp

#########################################################################################
// ---------- 13.u101.468.cpp
            #include <bits/stdc++.h>
            #include <algorithm>
            using namespace std;
            int main()
            {
            	int i,n,k;
            	long long a[100005];
/*copied */     cin >> n >> k;
/*copied */ 	for (i=0;i<n;i++)
/*copied */ 	  cin>> a[i];
/*copied */ 	sort(a,a+n);
/*copied */     
/*copied */       
/*copied */ 	  cout << a[k-1];	
            }

// ---------- end of 13.u101.468.cpp

