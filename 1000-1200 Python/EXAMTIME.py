T = int(input())

for i in range(T):
    dragon = [int(x) for x in input().split(" ")]
    sloth = [int(x) for x in input().split(" ")]

    if sum(dragon) > sum(sloth):
        print("Dragon")
    elif sum(dragon) < sum(sloth):
        print("Sloth")
    else:
        if dragon[0] > sloth[0]:
            print("Dragon")
        elif dragon[0] < sloth[0]:
            print("Sloth")
        else:
            if dragon[1] > sloth[1]:
                print("Dragon")
            elif dragon[1] < sloth[1]:
                print("Sloth")
            else:
                print("Tie")
