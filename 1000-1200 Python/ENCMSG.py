import string

T = int(input())

for i in range(T):
    N, S, alphabets = int(input()), list(input()), list(string.ascii_lowercase)

    for j in range(1, N, 2):
        if N % 2 == 0:
            temp = S[j-1]
            S[j-1] = S[j]
            S[j] = temp
        else:
            if j != N:
                temp = S[j - 1]
                S[j - 1] = S[j]
                S[j] = temp
            else:
                break

    for j in range(N):
        index = alphabets.index(S[j])
        S[j] = alphabets[-index-1]

    for j in S:
        print(j, end='')

    print()
