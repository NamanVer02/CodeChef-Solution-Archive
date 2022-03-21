#include <stdio.h>
int max(int num1, int num2, int num3);

int main(){
    int T, A, B, C;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d %d", &A, &B, &C);
        printf("%d\n", max(A, B, C));
    }
    return 0;
}

int max(int num1, int num2, int num3){
    int max = 0;
    if (num1 > num2){
        max = num1;
    }
    else{
        max = num2;
    }

    if (num3 > max){
        max = num3;
    }

    return max;
}
