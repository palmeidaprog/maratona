#include <iostream> 

using std::cin;
using std::cout;
using std::endl;

bool validate(int num);

int main() {
    int n;

    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        if(validate(x)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

bool validate(int num) {
    int small = num / 3, big = 0;

    while(small >= 0) {
        if(small * 3 + big * 7 == num) {
            return true;
        }
        small -= 2;
        ++big;
    }
    return false;
}

