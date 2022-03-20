T = int(input())

for i in range(T):
    temp = input().split(" ")
    N, M = int(temp[0]), int(temp[1])
    print(2*N + 4*M)
