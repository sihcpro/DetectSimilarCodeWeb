#include<bits/stdc++.h>
using namespace std ;
long long pow(long long n , long long y) {
    long long res = 1 ;
    while(y != 0)
    {
        if(y % 2 != 0) res = res*n;
        n=n*n ;
        y/=2;
     }
     return res ;
}
long long so (string a ) {
    long long x = 0 ;
    for(int i = 0 ; i < a.length()-1 ; i++){
        x = x*10+(a[i]-'0') ;
    }
    return x ;
}
int main()
{
    long long sum = 0 ;
    long long test ;
    cin >> test ;
    while(test--)
    {
        string a ;
        cin >> a ;
        long long a1 = so(a) ;
        long long h = (a[a.length()-1]-'0') ;
        sum+= pow(a1,h);
    }
    cout << sum << endl;
}