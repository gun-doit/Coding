num = []
for i in range(int(input())):
    num.append(int(input()))

num.sort(reverse=False)
for v in num:
    print(v)