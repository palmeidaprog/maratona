#include <stdio.h>
#include <stdlib.h>

int main(){
    int t , o , n, size = 0;
    int *p = (int *) malloc(sizeof(int) * 1000000);
    
    scanf("%d", &t);
    for(int i = 0; i < t ; i++){
        scanf("%d", &o);
        if(o == 1){
            scanf("%d", &n);
            p[size++] = n;
        }
        else if(o == 2){
            if(size > 0){
                --size;
            }
        }
        else{
            if(size > 0){
                printf("%d\n", p[size-1]);
            }
            else{
                printf("Empty!\n");
            }

        }
    }

    return 0;
}