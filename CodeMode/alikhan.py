l1 = list(map(int, input().split()))
if all(elem > 0 for elem in l1):
    if all(str(elem) == str(elem)[::-1] for elem in l1):
        print("Rovnyi")
    else:
        print("Ne rovnyi")
else:
    print("Ne rovnyi")