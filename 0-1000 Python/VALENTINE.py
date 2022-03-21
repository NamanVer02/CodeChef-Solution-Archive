T = int(input())

for i in range(T):
    temp = input().split(" ")
    X, Y = int(temp[0]), int(temp[1])

    print(X // Y)
