n = int(input())
set1,set2 = set(), set()
for _ in range(n):
    scr,dst = input().split()
    set1.add(scr)
    set2.add(dst)
print(*set2.difference(set1))