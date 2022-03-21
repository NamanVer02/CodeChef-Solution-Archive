#include <stdio.h>
int main(){
    int T, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d", &N);
        (N % 4 == 0) ? printf("Good\n") : printf("Not Good\n");
    }
    return 0;
}
