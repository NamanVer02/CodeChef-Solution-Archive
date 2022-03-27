T = int(input())

for i in range(T):
    N, S, result = int(input()), input(), "NO"
    for j in S:
        if S.count(j) % 2 == 0:
            result = "YES"
        else:
            result = "NO"
            break

    print(result)
