T = int(input())

for i in range(T):
    temp = input().split(" ")
    N, B = int(temp[0]), int(temp[1])
    area = 0

    for j in range(N):
        temp = input().split(" ")
        W, H, P = int(temp[0]), int(temp[1]), int(temp[2])

        if P <= B and W*H > area:
            area = W*H

    if area != 0:
        print(area)
    else:
        print("no tablet")
