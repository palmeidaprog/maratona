#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int modulo(long long a, long long b, int const &c);

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    cout << modulo(a, b, c) << endl;
    return 0;
}

const int modulo(long long a, long long b, int const &c) {
    int mod = 1;

    while(b) {
        if(b & 1) {
            mod = (mod * a) % c;
        }
        a = (a * a) % c;
        b >>= 1; 
    }
    return mod;
}