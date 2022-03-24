#include <stdio.h>
#include <stdlib.h>
int main(){
    int T, N, K;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d", &N, &K);
        int j = 0, req[N];
        while (j < N && scanf("%d", &req[j]) == 1){
            j++;
        }

        for (int k = 0; k < N; k++){
            if (req[k] <= K){
                printf("1");
                K -= req[k];
            }
            else{
                printf("0");
            }
        }

        printf("\n");
           
    }
    return 0;
}
