#include <iostream>

using namespace std;

bool isPrime(int const &a);

int main() {
    int n , a , b;
    cin >> n;
    if(n % 2 == 0){
        a = n / 2;
        b = a;
    }
    else {
        b = n / 2;
        a = b + 1;
    }
    while(isPrime(a) || isPrime(b)){
            a += 1;
            b -= 1;
    }
    cout <<  a << " " << b << endl; 

    return 0;
}

bool isPrime(int const &a) {
    for(int i = 2; i < a; i++) {
        if(a % i == 0){
            return false;
        }
    }
    return true;
}


