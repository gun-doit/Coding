#Bronze III

n = int(input())

for i in range(-n, n+1):
    if i == 0 or i == 1: continue
    for k in range(n-abs(i)):
        print(end=" ")
    for j in range(2*abs(i)-1):
        print('*', end="")
    print()