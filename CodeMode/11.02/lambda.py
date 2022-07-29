d = {
    'boys' :5,
    'girls' : 1,
    'dogs' : 1,

}

for k,v in sorted(d.items(), key = lambda x: x[0]):
    print(k,v)