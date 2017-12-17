#include <iostream> 
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

int revertNum(int const &n);

int main() {
    int n, num, num2;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num >> num2;
        num = revertNum(num);
        num += revertNum(num2);
        cout << revertNum(num) << endl;
    }
    return 0;
}

int revertNum(int const &n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return atoi(s.c_str());
}