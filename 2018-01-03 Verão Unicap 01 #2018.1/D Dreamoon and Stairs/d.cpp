#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n, m, steps;

    cin >> n >> m;
    if(n == 0) {

    }
    else if(n < m) {
        cout << -1 << endl;
    }
    else {
        steps = n >> 1;
        if(n & 1) {
            ++steps;
        }
        while(steps % m) {
            ++steps;
        }
        cout << steps << endl;
    }
    return 0;
}