82.98% of file 13.u113.470.cpp = 61.9% of file 13.t44.74.cpp

// ---------- 13.u113.470.cpp
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

// ---------- end of 13.u113.470.cpp

#########################################################################################
// ---------- 13.t44.74.cpp
            #include <iostream>
            #include <algorithm>
            using namespace std;
            
            int n, k;
            int a[100010];
            int main() {
                ios::sync_with_stdio(0);
/*copied */     cin >> n >> k;
/*copied */     for (int i = 0; i < n; i++) cin >> a[i];
/*copied */     sort(a, a+n);
/*copied */     cout << a[k-1];
                return 0;
            }
// ---------- end of 13.t44.74.cpp

