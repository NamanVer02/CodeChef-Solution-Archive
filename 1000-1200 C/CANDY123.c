    #include <stdio.h>
    #include <stdlib.h>
    int main(){
        int T, A, B;
        scanf("%d", &T);
        for (int i = 0; i < T; i++){
            int Limak = 0, Bob = 0, winner = 2, j = 1;
            scanf("%d %d", &A, &B);

            while (winner > 1){
                if (j % 2 == 0){
                    Bob += j;
                    if (Bob > B){
                        winner = 0;
                        break;
                    }
                    else{
                        ++j;
                    }
                }
                else{
                    Limak += j;
                    if (Limak > A){
                        winner = 1;
                        break;
                    }
                    else{
                        ++j;
                    }
                }
            }

            (winner == 0) ? printf("Limak\n") : printf("Bob\n");
        }   
        return 0;
    }
