#include <iostream>
#define MODULAR 1000003 // 10^6 + 3

using std::cin;
using std::cout;
using std::endl;

long long unsigned powerMod(int n);

int main() {
    std::ios::sync_with_stdio(false);
    int n;

    cin >> n;
    cout << powerMod(n) << endl;
    return 0;
}

long long unsigned powerMod(int n) {
    int r = 1;

    for(int i = 0; i < n - 1; i++) {
        r *= 3;
        r = r % MODULAR;
    }
    return r;
}