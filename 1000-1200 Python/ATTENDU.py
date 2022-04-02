T = int(input())

for i in range(T):
    N, attend = int(input()), input()
    absent = 0

    for j in attend:
        if j == "0":
            absent += 1

    attendance = ((120-absent)/120) * 100

    if attendance >= 75:
        print("YES")
    else:
        print("NO")
