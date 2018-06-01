#include <iostream>

using namespace std;

int xuli(int x) {
    int a = x/10, N = x%10, result = 1;
    for (int i=0; i<N; ++i) result *= a;
    return result;
}

main() {
    int N;
    cin >> N;
    int test, result = 0;
    while (N--) {
        cin >> test;
        result += xuli(test);
    }
    cout << result;
}
