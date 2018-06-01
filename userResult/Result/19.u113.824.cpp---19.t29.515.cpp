94.02% of file 19.u113.824.cpp = 78.57% of file 19.t29.515.cpp

// ---------- 19.u113.824.cpp
/*copied */ #include <bits/stdc++.h>
/*copied */ #include <string>
/*copied */ using namespace std;
/*copied */ int main()
/*copied */ {
/*copied */ 	int i,j,x;
/*copied */ 	long d;
/*copied */ 	string s,kq="";
/*copied */ 	cin >> s;
/*copied */ 	d = s.length()-1;
/*copied */ 	while (s[d]=='/') d--; 
/*copied */ 	kq+=s[0];
/*copied */ 	for (i=1;i<d;i++)
/*copied */ 	   if (s[i]!='/'||( s[i]=='/' && s[i-1]!='/'))
/*copied */ 	      kq+=s[i];
/*copied */    kq+=s[d];
/*copied */ 	cout << kq;
            	
            }
// ---------- end of 19.u113.824.cpp

#########################################################################################
// ---------- 19.t29.515.cpp
/*copied */ #include <bits/stdc++.h>
/*copied */ using namespace std;
/*copied */ int main()
/*copied */ {
/*copied */ 	string s,kq="";
            	long i,d;
            	ios::sync_with_stdio(0);
/*copied */ 	cin.tie(NULL);
/*copied */ 	cin>>s;
/*copied */ 	d=s.length()-1;
/*copied */ 	while(s[d]=='/') d--;
/*copied */ 	kq+=s[0];
/*copied */ 	for (i=1;i<d;i++)
/*copied */ 		if (s[i]!='/'||(s[i]=='/'&&s[i-1]!='/')) kq+=s[i];
/*copied */ 	kq+=s[d];
/*copied */ 	cout<<kq;
            	return 0;
            }
            

// ---------- end of 19.t29.515.cpp

