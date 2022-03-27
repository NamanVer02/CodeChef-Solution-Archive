#include <stdio.h>
int count(char c, int n, char s[n]);

int main(){
    int T, N, result;     
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d", &N);
        char S[N];
        scanf("%s", &S);
        
        for (int j = 0; j < N; j++){
            if (count(S[j], N, S) % 2 == 0){
                result = 0;
            }
            else{
                result = 1;
                break;
            }
        }

    (result == 1) ? printf("NO\n") : printf("YES\n");
        
    }   
    return 0;
}


int count(char c, int n, char s[n]){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == c){
            count += 1; 
        }
    }
    return count;
}
