T = int(input())

for i in range(T):
    temp = input().split(" ")
    X, A, B = int(temp[0]), int(temp[1]), int(temp[2])

    if A + 2*B >= X:
        print("Qualify")
    else:
        print("NotQualify")
