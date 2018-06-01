#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll x[5], y[5];
int main ()
{
    cin >> x[1] >> y[1];
    cin >> x[2] >> y[2];
    cin >> x[3] >> y[3];

    int a1=x[2]-x[1];
    int a2=y[2]-y[1];
    int b1=x[3]-x[2];
    int b2=y[3]-y[2];

    if (a1*b2==a2*b1) cout << "TOWARDS";
    else if (x[1]==x[2])
    {
        if (y[1]<y[2])
            if (x[3]>x[2]) cout << "RIGHT";
            else cout << "LEFT";
        else
            if (x[3]<x[2]) cout << "RIGHT";
            else cout << "LEFT";
    }
    else if (y[1]==y[2])
    {
        if (x[1]<x[2])
            if (y[3]<y[2]) cout << "RIGHT";
            else cout << "LEFT";
        else
            if (y[3]>y[2]) cout << "RIGHT";
            else cout << "LEFT";
    }
    else
    {
        float a=(y[2]-y[1])/(x[2]-x[1]);
        float b= y[1]-x[1]*a;
        float u= a*x[3] - y[3] + b;
        //cout << a << " " << b << " " << u ;
        if (a>0)
        {
            if (x[1]<x[2])
                if (u>0) cout << "RIGHT";
                else cout << "LEFT";
            else
                if (u<0) cout << "RIGHT";
                else cout << "LEFT";
        }
        else
        {
            if (x[1]<x[2])
                if (u>0) cout << "RIGHT";
                else cout << "LEFT";
            else
                if (u<0) cout << "RIGHT";
                else cout << "LEFT";
        }

    }

}