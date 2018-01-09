#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int calculate(int const points, int const minutes);

int main() {
    int mishaPts, vasyaPts, mishaMin, vasyaMin;

    cin >> mishaPts >> vasyaPts >> mishaMin >> vasyaMin;
    mishaPts = calculate(mishaPts, mishaMin);
    vasyaPts = calculate(vasyaPts, vasyaMin);

    if(vasyaPts == mishaPts) {
        cout << "Tie" << endl;
    }
    else if(vasyaPts > mishaPts) {
        cout << "Vasya" << endl;
    }
    else {
        cout << "Misha" << endl;
    }

    return 0;
}

int calculate(int const points, int const minutes) {
    int p = points * 3 / 10;
    int p2 = points - (points / 250 * minutes);

    return (p > p2) ? p : p2;
}