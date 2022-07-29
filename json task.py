import json
f = open("Untitled-2.json", "r")
x = f.read()
dd = json.loads(x)

# print(*dd.values())

print("Interface status")
print('='*120)
print("DN", " "*50, "Speed", " "*20, "switchingSt"," "*20, "ID")
print("~"*42, " "*10, "~"*7, " "*20, "~"*9," "*18, "~"*9)

for j in range(10):
    for k,v in dd["imdata"][j].items():
        for i in v.values():
            print(i["dn"]," "*10,i["speed"] , " "*20, i["switchingSt"], " "*20, i["id"])
