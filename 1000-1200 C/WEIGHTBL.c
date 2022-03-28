#include <stdio.h>
int main(){
    int T, w1, w2, x1, x2, M;     
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d %d %d %d", &w1, &w2, &x1, &x2, &M);

        (w2-w1 >= x1*M && w2-w1 <= x2*M) ? printf("1\n") : printf("0\n"); 
    }
    return 0;
}
