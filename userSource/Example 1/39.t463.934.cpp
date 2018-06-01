#include<stdio.h>
#include<iostream>
using namespace std;

long long mu(int a, int b)
{
    long s=1;
    for(int i=1; i<=b; i++)
    {
        s=s*a;
    }
    return s;
}
int main()
{
    long long s=0;
    long long a[15];
    int n;
    long long c,b;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin >>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        b=(long long)(a[i]/10);
        c=a[i]-b*10;
        s=s+mu(b, c);
    }
    cout<<s;
    return 0;
}