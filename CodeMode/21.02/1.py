import re

s = 'abcdadkgdadsdfabcabcccabc'
pattern = r'abc'
# print(*re.finditer(pattern,s))
for i in re.finditer(pattern, s):
    # print(i.span())
    print(i.end())