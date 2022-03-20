T = int(input())

for i in range(T):
    temp = input().split(" ")
    C, X, Y = int(temp[0]), int(temp[1]), int(temp[2])
    print((C-X) * Y)
