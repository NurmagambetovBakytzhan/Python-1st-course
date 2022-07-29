n = int(input())
cnt = 0
s = list()
while n > 0:
    k = int(input())
    for i in range(1, int(k**0.5) + 1):
        if k % i == 0:
            cnt+=1
    if cnt == 3:
        s.append("YES")
    else:
        s.append("NO")
    cnt = 0
    n = n - 1
print(s)