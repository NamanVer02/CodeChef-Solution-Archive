#include <stdio.h>
int main(){
    int T, N;
    float attendance;     
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d", &N);
        char attend[N];
        float absent = 0;
        scanf("%s", &attend);

        for (int j = 0; j < N; j++){
            if (attend[j] == '0'){
                absent += 1;
            }
        }

        attendance = (1 - absent/120) * 100;
        (attendance >= 75) ? printf("YES\n") : printf("NO\n");    
    }
    return 0;
}
