T = int(input())

for i in range(T):
    temp = input().split(" ")
    N, K = int(temp[0]), int(temp[1])

    people = input().split(" ")

    for j in people:
        if int(j) <= K:
            print(1, end='')
            K -= int(j)
        else:
            print(0, end='')

    print("")
