#include <iostream>
#include <string>
#include <cstring>
#include <set>
#include <algorithm>
using namespace std;

bool p(int x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return 0;
    return x > 1;
}

int main() {
    ios::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        set<int> sp;
        for (int i = 1; i < (1 << s.size()); i++) {
            string t = "";
            for (int j = 0; j < s.size(); j++) {
                if ((i >> j) & 1) t += s[j];
            }
            sort(t.begin(), t.end());
            do {
                int x = atoi(t.c_str());
                if (p(x)) sp.insert(x);
            } while (next_permutation(t.begin(), t.end()));

        }
        cout << sp.size() << "\n";
    }
    return 0;
}