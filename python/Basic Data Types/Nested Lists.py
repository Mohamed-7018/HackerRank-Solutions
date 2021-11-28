students = []
SecondLowestGrades = []
degrees = set()

for _ in range(int(input())):
    name = input()
    grade = float(input())
    students.append([name, grade])
    degrees.add(grade)

SECOND_LOWEST = sorted(degrees)[1]

for name, grade in students:
    if grade == SECOND_LOWEST:
        SecondLowestGrades.append(name)

for name in sorted(SecondLowestGrades):
    print(name, end='\n')