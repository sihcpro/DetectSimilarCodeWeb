#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, cnt;
vector<int> pos, neg;

int main() {
    cin >> n;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (x > 0) pos.push_back(x);
        else if (x < 0) neg.push_back(x);
        else cnt++;
    }

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    int P = pos.size();
    int N = neg.size();
    int mx;
    if (cnt) mx = 0;
    else if (P >= 2) mx = pos[P-1] * pos[P-2];
    else if (N >= 2) mx = neg[0] * neg[1];

    if (P >= 2) mx = max(mx, pos[P-1] * pos[P-2]);
    if (N >= 2) mx = max(mx, neg[0] * neg[1]);

    if (P >= 3) mx = max(mx, pos[P-1] * pos[P-2] * pos[P-3]);
    if (N >= 3) mx = max(mx, neg[0] * neg[1] * neg[2]);

    if (P > 0 && N >= 2) mx = max(mx, neg[0] * neg[1] * pos[P-1]);
    cout << mx;
    return 0;
}