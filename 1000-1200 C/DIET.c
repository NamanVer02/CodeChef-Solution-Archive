#include <stdio.h>
#include <stdlib.h>
int main(){
    int T, N, K;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d", &N, &K);
        int j = 0, buy[N], protein = 0, day = 1, result = 0;
        while (j < N && scanf("%d", &buy[j]) == 1){
            j++;
        }

        for (int k = 0; k < N; k++){
            protein += buy[k];
            if (protein >= K){
                result = 0;
                protein -= K;
                day += 1;
            }

            else{
                result = 1;
                break;
            }
        }

        (result == 0) ? printf("YES\n") : printf("NO %d\n", day);    
    }
    return 0;
}

