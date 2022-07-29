s = input()
s = s.lower()
l1 = list()
for i in s:
    if 'a'<=i<='z':
        l1.append(int(ord(i) - 96))
print(*l1)