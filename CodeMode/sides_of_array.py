l1 = set(list(map(int, input().split())))
for i in range(len(l1)):
    if sum(l1[:i]) == sum(l1[i+1:]):
        print(i)
        exit()
return -1