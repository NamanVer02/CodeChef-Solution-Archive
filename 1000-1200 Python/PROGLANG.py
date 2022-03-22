T = int(input())

for i in range(T):
    temp = input().split(" ")
    A, B, A1, B1, A2, B2 = int(temp[0]), int(temp[1]), int(temp[2]), int(temp[3]), int(temp[4]), int(temp[5])

    if (A1 == A and B1 == B) or (A1 == B and B1 == A):
        print(1)
    elif (A2 == A and B2 == B) or (A2 == B and B2 == A):
        print(2)
    else:
        print(0)
