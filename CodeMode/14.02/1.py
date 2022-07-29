class person:
    def __init__(self,gender) -> None:
        self.gender = gender

class student(person):
    def __init__(self,loan, gender) -> None:
        super().__init__(gender)
        self.loan = loan
Ernat = student(2500, 'M')
print(Ernat.loan, Ernat.gender)