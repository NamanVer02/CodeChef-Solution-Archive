#include <stdio.h>
int sum(int arr[3]);

int main(){
    int T, N, M;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        int dragon[3], sloth[3];
        scanf("%d %d %d", &dragon[0], &dragon[1], &dragon[2]);
        scanf("%d %d %d", &sloth[0], &sloth[1], &sloth[2]);

        if (sum(dragon) > sum(sloth)){
            printf("Dragon\n");
        }
        else if (sum(dragon) < sum(sloth)){
            printf("Sloth\n");
        }
        else{
            if (dragon[0] > sloth[0]){
                printf("Dragon\n");
            }
            else if (dragon[0] < sloth[0]){
                printf("Sloth\n");
            }
            else{
                if (dragon[1] > sloth[1]){
                    printf("Dragon\n");
                }
                else if (dragon[1] < sloth[1]){
                    printf("Sloth\n");
                }
                else{
                    printf("Tie\n");
                }
            }
        }
    }
    return 0;
}

int sum(int arr[3]){
    int sum = 0;
    for (int i = 0; i < 3; i++){
        sum += arr[i];
    }
    return sum;
}
