#lenght = 6-12, A, a, 1,*
passwords = [
  "SDF#$%56bn",
  "987!@YHBv",
  "adilIjaks",
  "Group_1",
  "group-adin",
  "GRUPPA-DYVA"
]
import re
pattern = r'(?=.*[A-Z])(?=.*[a-z])(?=.*[0-9]).{6,12}'
for i in passwords:
    if re.search(pattern, i):
        print("valid")
    else:
        print("invvv")
