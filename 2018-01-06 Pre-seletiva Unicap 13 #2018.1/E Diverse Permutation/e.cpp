#include <iostream>


using std::cin;
using std::cout;
using std::endl;


int main() {
	int n, k, p1 = 1, p2 = 1;
	cin >> n >> k;

    p2 += k;
    while(p1 < p2) {
        cout << p1++ << " " << p2-- << " ";
    }

    if(p1 == p2) {
        cout << p2 << " ";
    }

    int i = k + 2;
    while(i <= n) {
        cout << i++ << " ";
    }
    cout << endl;
	return 0;
}