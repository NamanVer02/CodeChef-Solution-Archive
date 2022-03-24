T = int(input())

for i in range(T):
    temp = input().split(" ")
    A, B = int(temp[0]), int(temp[1])
    Limak, Bob, i, winner = 0, 0, 1, ""

    while winner == "":
        if i % 2 == 0:
            Bob += i

            if Bob > B:
                winner = "Limak"
                break
            else:
                i += 1

        else:
            Limak += i

            if Limak > A:
                winner = "Bob"
                break
            else:
                i += 1

    print(winner)
