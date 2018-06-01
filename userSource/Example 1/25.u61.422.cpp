#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;


#define _abs(x) ((x) > 0 ? (x) : -(x))
int n, m;
int c1, c2;
int a[500010], b[500010];
int main() {
//    freopen("inp.txt", "r", stdin);
    
    scanf("%d %d", &n, &m);
    scanf("%d %d", &c1, &c2);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    sort(a, a + n);
    sort(b, b + m);
    
    int i = 0, j = 0;
    int mn = 2e8 + 10;
    int cnt = 0;
    while (i < n && j < m) {
        int tmp = _abs(a[i] - b[j]);
        if (tmp == mn) {
            cnt++;
        }
        else if (tmp < mn) {
            mn = tmp;
            cnt = 1;
        }
        
        if (a[i] > b[j]) j++;
        else i++;
    }
    
    cout << mn + _abs(c1 - c2) << " " << cnt;
    return 0;
}