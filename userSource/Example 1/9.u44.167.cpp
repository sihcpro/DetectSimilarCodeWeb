#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int toInt(string s) {
    int r = 0;
    for (int i = 0; i < s.size(); i++)
        (r *= 10) += s[i] - '0';
    return r;
}

bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return x > 1;
}

int main() {
    ios::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int L = s.size();
        set<int> S;
        for (int i = 1; i < (1 << L); i++) {
            string n = "";
            for (int j = 0; j < L; j++) {
                if ((i >> j) & 1)
                    n += s[j];
            }

            sort(n.begin(), n.end());
            do {
                int N = toInt(n);
                if (isPrime(N))
                    S.insert(N);
            } while (next_permutation(n.begin(), n.end()));
        }

        cout << S.size() << '\n';
    }
}