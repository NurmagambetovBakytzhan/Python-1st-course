l1 = list(map(int,input().split()))
for i in l1:
    if i == 0:
        l1.remove(0)
        l1.append(i)
print(*l1)
