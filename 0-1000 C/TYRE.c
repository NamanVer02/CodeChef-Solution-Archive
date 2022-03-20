#include <stdio.h>
int main(){
    int T, M, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d", &N, &M);
        printf("%d\n", 4*M + 2*N);
    }
    return 0;
}
