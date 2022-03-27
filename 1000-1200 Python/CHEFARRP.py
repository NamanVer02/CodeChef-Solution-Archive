T = int(input())

for i in range(T):
    N, arr, count = int(input()), [int(x) for x in input().split(" ")], 0

    for j in range(N):
        add, product = 0, 1
        for k in range(j, N):
            add += arr[k]
            product *= arr[k]

            if add == product:
                count += 1

    print(count)
