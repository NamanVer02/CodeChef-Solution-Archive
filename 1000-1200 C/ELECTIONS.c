    #include <stdio.h>
    #include <stdlib.h>
    int main(){
        int T, A, B, C;
        scanf("%d", &T);
        for (int i = 0; i < T; i++){
            scanf("%d %d %d", &A, &B, &C);
            if (A > 50){
                printf("A\n");
            }
            else if (B > 50){
                printf("B\n");
            }
            else if (C > 50){
                printf("C\n");
            }
            else{
                printf("NOTA\n");
            }
        }
        return 0;
    }
