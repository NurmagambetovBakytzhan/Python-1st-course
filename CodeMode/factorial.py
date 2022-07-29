from math import factorial
l1 = list(map(int, input().split()))
n = int(input())
cnt = 0
for i in l1:
    if i > factorial(n):
        cnt+=1
print(cnt)