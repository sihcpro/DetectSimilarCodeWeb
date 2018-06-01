#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a; cin >> a;
    if (n == 1 || a % 3 < 2) cout << a % 3;
    else {
        int b; cin >> b;
        cout << (b % 2 ? 2 : 1);
    }
    return 0;
}