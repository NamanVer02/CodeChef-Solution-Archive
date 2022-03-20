#include <stdio.h>
int main(){
    int T, X;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d", &X);
        (X <= 15) ? printf("Yes\n") : printf("No\n");
    }
    return 0;
}
