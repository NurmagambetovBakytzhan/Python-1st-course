from tkinter import N


def gen():
    n = 1 
    yield n

    n = n*2
    yield n

    n = n*2
    yield n
num = gen()
for i in range(3):
    print(next(num))