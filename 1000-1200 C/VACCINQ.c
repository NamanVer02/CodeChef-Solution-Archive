    #include <stdio.h>
    #include <stdlib.h>
    int main(){
        int T, N, P, X, Y;
        scanf("%d", &T);
        for (int i = 0; i < T; i++){
            scanf("%d %d %d %d", &N, &P, &X, &Y);
            int j = 0, line[N], time = 0;
            while (j < N && scanf("%d", &line[j]) == 1){
                j++;
            }

            for (int k = 0; k < P; k++){
                if (line[k] == 0){
                    time += X;
                }
                else{
                    time += Y;
                }
            }

            printf("%d\n", time);
        }
        return 0;
    }

