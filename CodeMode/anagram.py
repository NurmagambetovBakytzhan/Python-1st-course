

words = input().split() #<- list
result = {}
for word in words:
    sorted_word = ''.join(sorted(word))
    if sorted_word in result:
        result[sorted_word].append(word)
    else:
        result[sorted_word] = [word]
print(list(result.values()))
