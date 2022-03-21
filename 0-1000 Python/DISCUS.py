T = int(input())

for i in range(T):
    temp = input().split(" ")
    A, B, C = int(temp[0]), int(temp[1]), int(temp[2])

    print(max(A, B, C))
