#include <iostream>
#include <cstdio>
#define MOD 100000007

using std::cin;
using std::cout;
using std::endl;

//int *initArray(int const size);
int fib(int n, int *f, int *last);

int main() {
    std::ios::sync_with_stdio(false);
    int t, n, last = 2;
    int *f = new int[500001];
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;

    scanf("%d", &t); 
    while(t--) {
        scanf("%d", &n);
        printf("%d\n", fib(n, f, &last));
    }
    delete []f;
    return 0;
}

int fib(int n, int *f, int *last) {  
    if(n <= *last) {
        return f[n];
    }

    int i, a = f[*last-1], b = f[*last], c;
    for(i = *last+1; i <= n; ++i) {
        c = (a + b) % MOD;
        a = b;
        b = c;
        f[i] = c;
    }
    *last = i-1;
    return f[n];
}
