#include <stdio.h>
#include <string.h>
int main(){
    int T;
    char S1[100], S2[100];     
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        int diff = 0, extra_diff = 0;
        scanf("%s\n%s", &S1, &S2);
        for (int i = 0; i < strlen(S1); i++){
            if (S1[i] != S2[i] && (S1[i] != '?' && S2[i] != '?')){
                diff += 1;
            }
            else if (S1[i] == '?' || S2[i] == '?'){
                extra_diff += 1;
            }
        }
        printf("%d %d\n", diff, diff + extra_diff);
    }   
    return 0;
}
