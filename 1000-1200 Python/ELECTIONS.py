T = int(input())

for i in range(T):
    temp = input().split(" ")
    A, B, C = int(temp[0]), int(temp[1]), int(temp[2])
    
    if A > 50:
        print("A")
    elif B > 50:
        print("B")
    elif C > 50:
        print("C")
    else:
        print("NOTA")
