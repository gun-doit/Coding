gradeCase = {'A+': 4.5, 'A0': 4.0, 'B+':3.5, 'B0':3.0, 'C+':2.5, 'C0':2.0, 'D+':1.5, 'D0':1.0, 'F':0.0}

grades = 0.0
credits = 0.0
for i in range(20):
    name, credit, grade = input().split()
    
    if grade == 'P':
        continue
    credits += float(credit) * gradeCase[grade]
    grades += float(credit)

print(round(credits/grades,6))    