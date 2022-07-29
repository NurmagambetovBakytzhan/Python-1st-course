import json
from re import L
f = open("task.json",'r')
temp = f.read()
x = json.loads(temp)

for k, v in x.items():
    print('{}:{}'.format(k,v))
x['myName'] = 'DDDName'
x['nums'].sort()
x['heroes']['spider-man'] = 'kana'
for k,v in x['heroes'].items():
    print('{}: {}'.format(k,v))
y = json.dumps(x, indent=4)
with open('res.json', 'w') as f:
    f.write(y)