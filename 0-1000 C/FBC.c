#include <stdio.h>
int main(){
    int T, X, K;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d", &K, &X);
        printf("%d\n", K-X);
    }
    return 0;
}
