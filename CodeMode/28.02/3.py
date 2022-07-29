# Допилите файл менеджер:
# 1) +При команде dir выводите также колво папок и колво файлов (а также чтобы оно было как в cmd)
# 2) +Сделать возврат в папку "C:\\"

# Добавить фичи для работы с файлами:
# 1) Переименовывание файлов
# 2) Добавить что-то в уже существующий файл (open(filename.txt, 'a'))
# 3) Переписать данные текущего файла в другой файл



import os
# 1) Создать или открыть файл или папку
# 2) Перемещение между директориями
# 3) Удаление файлов и папок
# 4) Список доступных директорий
cntf = 0
cntdir = 0
while True:
    command = input()
    if command == 'C':
        os.chdir("C:\\")
        print(os.getcwd())
    if command == 'cd':
        kuda = input()
        if os.path.isdir(kuda) and os.path.exists(kuda):
            os.chdir(kuda)
            print("Done")
        else:
            print("Not a directory")
    elif command == "rename file":
        thing = input()
        if os.path.exists(thing):
            print("write new name")
            new_name = input()
            os.rename(thing, new_name)
            print("Done!")
        else:
            print("No such file")
    elif command == 'dir':
        for i in os.listdir():
            if os.path.isdir(i):
                cntdir += 1
            if os.path.isfile(i):
                cntf+=1
        print(f"Number of dirs : {cntdir}")
        print(f"Number of files: {cntf}")
        cntdir = 0
        cntf = 0
        print(os.listdir(os.getcwd()), sep='\n')

    elif command == 'gdeya':
        print(f'The current directory is: [{os.getcwd()}]')

    elif command == 'del':
        chto = input()
        if os.path.exists(chto):
            os.remove(chto)
            print("done")
        else:
            print("there is no such file")

    elif command == 'create dir':
        imya = input()
        if os.path.exists(imya):
            print("Uzhe est'")
        else:
            os.mkdir(imya)
            print(f"Created {imya}")

    elif command == 'create file':
        imya = input()
        if os.path.exists(imya):
            print("Uzhe est'")
        else:
            f = open(imya, 'w')
            s = input("Che napisat'?\n")
            f.write(s)
            f.close()
            print(f"Created {imya}")

    elif command == 'exit':
        break