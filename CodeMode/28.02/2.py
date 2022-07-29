
import os
while True:
    command = input()
    if command == 'cd':
        kuda = input()
        if os.path.isdir(kuda) and os.path.exists(kuda):
            print("YES")
            # os.chdir(kuda)
            os.chdir(os.path.join(os.getcwd(), kuda))
        else:
            print("NO") 
    elif command == 'dir':
        print(os.listdir(os.getcwd()) ,sep = '\n')
    elif command == 'gdeya':
        print(os.getcwd())
    elif command == 'create dir':
        name = input()
        if os.path.exists(name):
            print("Exist already")
        else:
            os.mkdir(name)
            print("Created {name}")
    elif command == 'del':
        thing = input()
        if os.path.exists(thing):
            os.remove(thing)
            print("OK")
        else:
            print("There s no such file")
    elif command == 'create file':
        imya = input()
        if os.path.exists(imya):
            print("Uzhe est'")
        else:
            f = open(imya, 'w')
            f.close()
            print("Created {imya}")
    elif command == 'exit':
        break
