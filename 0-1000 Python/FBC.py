T = int(input())

for i in range(T):
    temp = input().split(" ")
    K, X = int(temp[0]), int(temp[1])
    print(abs(K-X))
