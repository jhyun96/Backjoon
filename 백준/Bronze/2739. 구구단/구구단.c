#include <stdio.h>

int main() {
    int N;
    int i;
    scanf("%d", &N);
    for(i=1; i<10; i++){
        printf("%d * %d = %d\n", N, i, i*N);
    }
}