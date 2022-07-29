import json
f = open("task2.json","r")
x = f.read()

dd = json.loads(x)
dd["model"] = "LENOVO"
dd["processor"] = "Cheese"
dd["owners"][0] = "He"
dd["owners"].append("Braat") 
dd["prod"] = ["Milk", "Egg", "Bread"]
y = json.dumps(dd, indent=4)
with open('res2.json',"w") as f:
    f.write(y)