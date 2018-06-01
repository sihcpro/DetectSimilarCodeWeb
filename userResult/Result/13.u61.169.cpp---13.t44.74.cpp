100.0% of file 13.u61.169.cpp = 100.0% of file 13.t44.74.cpp

// ---------- 13.u61.169.cpp
/*copied */ #include <iostream>
/*copied */ #include <algorithm>
/*copied */ using namespace std;
/*copied */ 
/*copied */ int a[100010];
/*copied */ int main() {
/*copied */ 	ios::sync_with_stdio(0);
/*copied */ 	int n, k; cin >> n >> k;
/*copied */ 	for (int i = 0; i < n; i++) cin >> a[i];
/*copied */ 	sort(a, a+n);
/*copied */ 	cout << a[k-1];
/*copied */ 	return 0;
            }
// ---------- end of 13.u61.169.cpp

#########################################################################################
// ---------- 13.t44.74.cpp
/*copied */ #include <iostream>
/*copied */ #include <algorithm>
/*copied */ using namespace std;
/*copied */ 
/*copied */ int n, k;
/*copied */ int a[100010];
/*copied */ int main() {
/*copied */     ios::sync_with_stdio(0);
/*copied */     cin >> n >> k;
/*copied */     for (int i = 0; i < n; i++) cin >> a[i];
/*copied */     sort(a, a+n);
/*copied */     cout << a[k-1];
/*copied */     return 0;
            }
// ---------- end of 13.t44.74.cpp

