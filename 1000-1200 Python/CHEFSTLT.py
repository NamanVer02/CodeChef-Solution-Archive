T = int(input())

for i in range(T):
    S1, S2 = input(), input()
    diff, extra_diff = 0, 0

    for i in range(len(S1)):
        if S1[i] != S2[i] and (S1[i] != "?" and S2[i] != "?"):
            diff += 1
        elif S1[i] == "?" or S2[i] == "?":
            extra_diff += 1

    print(diff, diff + extra_diff)
