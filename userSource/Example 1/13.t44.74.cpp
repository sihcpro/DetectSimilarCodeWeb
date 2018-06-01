#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int a[100010];
int main() {
    ios::sync_with_stdio(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    cout << a[k-1];
    return 0;
}