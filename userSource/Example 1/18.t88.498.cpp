#include <bits/stdc++.h>
#define sc scanf
#define pr printf
#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Ford(i,a,b) for(int i=(a); i>=(b); i--)
#define ll long long
using namespace std;
bool gaugau;
int d1,d2;
char ch[100][100];

main() {
For(i,1,4) {
    For(j,1,4) sc("%c",&ch[i][j]);
    sc("\n");
}
gaugau=false;
For(i,1,4)
    For(j,1,4) {
    if(i>=2&&j>=2){
        d1=0;d2=0;
        For(h,i-1,i)
            For(k,j-1,j)
                if(ch[h][k]=='#')   d1++;
                    else d2++;
        if (abs(d1-d2)==2||abs(d1-d2)==4) gaugau=true;
    }}
if (gaugau==true) pr("YES"); else pr("NO");

}