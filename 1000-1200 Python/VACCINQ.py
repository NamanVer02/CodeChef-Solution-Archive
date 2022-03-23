T = int(input())

for i in range(T):
    temp = input().split(" ")
    N, P, X, Y = int(temp[0]), int(temp[1]), int(temp[2]), int(temp[3])
    people = input().split(" ")
    time = 0

    for j in range(0, P):
        person = people[j]
        if person == "0":
            time += X
        else:
            time += Y

    print(time)
