80.99% of file 28.u440.761.cpp = 71.31% of file 28.u113.776.cpp

// ---------- 28.u440.761.cpp
/*copied */ #include<iostream>
/*copied */ #include<algorithm>
/*copied */ #include<math.h>
/*copied */ using namespace std;
/*copied */ 
/*copied */ int main(){
/*copied */ 	int n;cin>>n;
/*copied */ 	int a[n];
/*copied */ 	for(int i=0;i<n;i++){
/*copied */ 		cin>>a[i];
/*copied */ 	}
/*copied */ 	sort(a,a+n);
/*copied */ 	int a1=a[0]*a[1];
/*copied */ 	int a2=a[0]*a[1]*a[n-1];
/*copied */ 	int a3=a[n-2]*a[n-1];
/*copied */ 	int a4=a[n-3]*a[n-2]*a[n-1];
/*copied */ 	cout<<max(a1,max(a2,max(a3,a4)));
            }

// ---------- end of 28.u440.761.cpp

#########################################################################################
// ---------- 28.u113.776.cpp
/*copied */ #include <bits/stdc++.h>
/*copied */ #include <algorithm>
/*copied */ #include <math.h>
/*copied */ using namespace std;
/*copied */ int main()
/*copied */ {
/*copied */ 	int n,a[100005];
/*copied */ 	long long x1,x2,x3,x4;
/*copied */ 	cin >> n;
/*copied */ 	for (int i=0;i<n;i++)
/*copied */ 	{
/*copied */ 	
/*copied */ 	  cin >> a[i];
/*copied */      
/*copied */      }
/*copied */ 	sort(a,a+n);
/*copied */ 	x1=a[0]*a[1];
/*copied */ 	x2=a[0]*a[1]*a[n-1];
/*copied */ 	x3=a[n-1]*a[n-2];
/*copied */ 	x4=a[n-1]*a[n-2]*a[n-3];
/*copied */ 	cout <<(max(x1,max(x2,max(x3,x4))));
            	
            }
// ---------- end of 28.u113.776.cpp

