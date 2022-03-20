#include <stdio.h>
int main(){
    int T, X, Y, A, B, pow_req, pow;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d %d %d", &A, &B, &X, &Y);
        pow_req = A*B;
        pow = X*Y;

        (pow >= pow_req) ? printf("Yes\n") : printf("No\n");
     }
    return 0;
}
