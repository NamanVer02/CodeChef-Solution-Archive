#include <stdio.h>
int main(){
    int T, N;     
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d", &N);
        int arr[N], j = 0, count = 0;
        
        while (j < N && scanf("%d", &arr[j]) == 1){
            j++;
        }
        
        for (j = 0; j < N; j++){
            int sum = 0, product = 1;
            for (int k = j; k < N; k++){
                sum += arr[k];
                product *= arr[k];

                if (sum == product){
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
