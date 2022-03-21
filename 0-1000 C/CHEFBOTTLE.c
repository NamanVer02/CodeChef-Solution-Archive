#include <stdio.h>
int max(int num1, int num2, int num3);

int main(){
    int T, N, X, K;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d %d", &N, &X, &K);
        int max = K / X;

        (max <= N) ? printf("%d\n", max) : printf("%d\n", N);
    }
    return 0;
}

