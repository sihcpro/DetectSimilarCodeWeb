#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    float x,y;
    cin >> x >> y;
    if (x>0 && y>0) cout << "I";
    else if (x<0 && y>0) cout << "II";
    else if (x<0 && y<0) cout << "III";
    else if (x>0 && y<0) cout << "IV";
}