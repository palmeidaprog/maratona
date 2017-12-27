#include <cstdio>

int main() {
    int *v = new int[1000000];
    int t, n, m, start = 0, tail = 0;

    scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        scanf("%d", &m);
        switch(m) {
            case 1:
                scanf("%d", &n);
                v[tail++] = n;
                break;  
            case 2:
                if(start < tail) {
                    ++start;
                }
                break;
            default:
                if(start == tail) {
                    printf("Empty!\n");
                }
                else {
                    printf("%d\n", v[start]);
                }
                break;
        }
    }
    return 0;
}