#include <stdio.h>
int main(){
    int T, N, B, W, H, P;     
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d", &N, &B);
        int area = 0;
        
        for (int j = 0; j < N; j++){
            scanf("%d %d %d", &W, &H, &P);

            if (P <= B && W*H > area){
                area = W*H;
            }
        }

        (area != 0) ? printf("%d\n", area) : printf("no tablet\n"); 
    }   
    return 0;
}
