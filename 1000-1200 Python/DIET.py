T = int(input())

for i in range(T):
    temp = input().split(" ")
    N, K = int(temp[0]), int(temp[1])
    buy = [int(x) for x in input().split(" ")]
    protein, result, day = 0, "YES", 1

    for i in range(N):
        protein += buy[i]
        if protein >= K:
            result = "YES"
            protein -= K
            day += 1

        else:
            result = "NO"
            break

    if result == "YES":
        print(result)
    else:
        print(result, day)
