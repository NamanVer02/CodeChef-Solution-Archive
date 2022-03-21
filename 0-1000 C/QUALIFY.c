#include <stdio.h>
int main(){
    int T, X, A, B;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d %d", &X, &A, &B);
        (A + 2*B >= X) ? printf("Qualify\n") : printf("NotQualify\n");
    }
    return 0;
}

