arr1 = list(map(int, input().split()))
arr2 = [0 for _ in range(10)]
for word in arr1:
    for character in word:
        #if ''.join(j).isdigit():
        if character.isdigit():
            arr2[int(character)] = word
print(*[word for word in arr2 if word!= 0])