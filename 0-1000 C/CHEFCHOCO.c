#include <stdio.h>
int main(){
    int T, C, X, Y;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d %d", &C, &X, &Y);
        printf("%d\n", (C-X)*Y);
    }
    return 0;
}
