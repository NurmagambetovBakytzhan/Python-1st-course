import re
with open("raw.data","r", encoding='utf-8') as f:
    x = f.read()
pattern = r'Банковская карта:\n(?P<card>\[0-9]+)'
print(re.search(pattern,x).group("card"))