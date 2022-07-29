n = int(input())
s = list()
s.append(0)
s.append(1)
for i in range(2,n+1):
    k = s[i-1] + s[i- 2]
    s.append(k)
print(s)
