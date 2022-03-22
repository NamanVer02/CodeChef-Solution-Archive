#include <stdio.h>
int main(){
    int T, N, M;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d", &N, &M);

        ((N*M) % 2 == 0) ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}
