words = list(map(str,input().split()))
arr = [set(word) for word in words]
s = arr[0]
for i in arr:
    s = s.intersection(i)
print(*sorted(set(s)), sep = '')

