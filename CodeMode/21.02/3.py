
import re
with open("raw.data","r", encoding='utf-8') as f:
    x = f.read()
pattern = r'Стоимость\n(?P<price>[\d\s]+)'
arr = re.findall(pattern, x)
modified_arr = [int(i.replace(' ','')) for i in arr]
print(sum(modified_arr))