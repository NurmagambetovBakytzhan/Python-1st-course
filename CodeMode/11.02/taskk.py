n = int(input())
arr = []
for _ in range(n):
    surn, name, id = input().split()
    arr.append((surn, name, id))
for i in sorted(arr, key = lambda x : (x[2],x[1] , x[0]), reverse=True):
    print(*i)
