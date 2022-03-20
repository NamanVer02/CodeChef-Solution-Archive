T = int(input())

for i in range(T):
    temp = input().split(" ")
    A, B, X, Y = int(temp[0]), int(temp[1]), int(temp[2]), int(temp[3])

    pow_req = A*B
    power = X*Y

    if power >= pow_req:
        print("Yes")
    else:
        print("No")
