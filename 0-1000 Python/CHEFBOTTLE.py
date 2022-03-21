T = int(input())

for i in range(T):
    temp = input().split(" ")
    N, X, K = int(temp[0]), int(temp[1]), int(temp[2])
    maximum = K // X

    if maximum <= N:
        print(maximum)
    else:
        print(N)
