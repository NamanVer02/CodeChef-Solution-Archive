T = int(input())

for i in range(T):
    temp = input().split(" ")
    N, M = int(temp[0]), int(temp[1])

    if (N*M) % 2 == 0:
        print("YES")
    else:
        print("NO")
