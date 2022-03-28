T = int(input())

for i in range(T):
    temp = input().split(" ")
    w1, w2, x1, x2, M = int(temp[0]), int(temp[1]), int(temp[2]), int(temp[3]), int(temp[4])

    if w2-w1 in range(x1*M, x2*M + 1):
        print(1)
    else:
        print(0)
