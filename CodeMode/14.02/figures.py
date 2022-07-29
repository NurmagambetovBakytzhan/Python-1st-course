class Figures:
    def __init__(self, color) -> None:
        self.color = color


class Qvadrat(Figures):
    def __init__(self, color, lenght) -> None:
        self.lenght = lenght
        super().__init__(color)
    def find_area(self):
        return self.lenght * self.lenght
    def perimeter(self):
        return 4*self.lenght


class Circle(Figures):
    def __init__(self, color, radius) -> None:
        super().__init__(color)
        self.radius = radius
    def dlin_okr(self):
        return 2 * 3.14 * self.radius
    def find_area(self):
        return 3.14 * self.radius**2

r = int(input())
a = int(input())

rec = Qvadrat('green', a)
cir = Circle('red', r)
if(Circle.find_area(cir) > Qvadrat.find_area(rec)):
    print("krug bolshe", Circle.find_area(cir),"m^2")
else:
    print("Qvadrat bolshe", Circle.find_area(cir),"m^2")
if(Circle.dlin_okr(cir) > Qvadrat.perimeter(rec)):
    print("krug dlinee", Circle.dlin_okr(cir), "cm")
else:
    print("Qvadrat dlinee", Qvadrat.perimeter(rec) , "cm")