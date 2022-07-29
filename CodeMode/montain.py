


l = list(map(int, input().split()))

for i in range(len(l)//2):
    if int(l[i]) >= int(l[i+1]):
        print("No")
        exit()
for i in range(int(len(l)/2) + 1, len(l)):
    if int(l[i-1]) <= int(l[i]):
        print("No")
        exit()
print("Yes")