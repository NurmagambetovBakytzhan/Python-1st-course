
from distutils.filelist import findall
import re
with open("t7.txt","r", encoding='utf-8') as f:
    x = f.read()
pattern = r'def\s(\w+)'
arr = re.findall(pattern,x)
print(*arr, sep = '\n')