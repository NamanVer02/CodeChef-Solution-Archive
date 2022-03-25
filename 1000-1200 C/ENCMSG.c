#include <stdio.h>
int arr_index(char c, char arr[]);

int main(){
    int T, N;
    char S[100], alphabets[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
     
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d\n%s", &N, &S);
        char temp;
          
        for (int j = 1; j < N; j+=2){
            if (N % 2 == 0){
                temp = S[j-1];
                S[j-1] = S[j];
                S[j] = temp;
            }
            else{
                if (j != N){
                temp = S[j-1];
                S[j-1] = S[j];
                S[j] = temp;
                }
                else{
                    break;
                }
            }
        }

        for (int j = 0; j < N; j++){
            S[j] = alphabets[25 - arr_index(S[j], alphabets)];
        }

        for (int j = 0; j < N; j++){
            printf("%c", S[j]);
        }
        printf("\n");
    }   
    return 0;
}

int arr_index(char c, char arr[]){
    for (int i = 0; i < 26; i++){
        if (arr[i] == c){
            return i;
        }
    }
}
