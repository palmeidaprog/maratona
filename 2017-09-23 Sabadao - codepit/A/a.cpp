#include <iostream>

using namespace std;

int main() {
	long long int a, b, c;

	while(cin >> a >> b) {
		c = (a > b) ? a -b : b - a;
		cout << c << endl;
	}

	return 0;
}
