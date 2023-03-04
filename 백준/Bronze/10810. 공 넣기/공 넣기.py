n ,m = map(int,input().split())
num = [0 for i in range(n)]

for _ in range(m):
    i, j, k = map(int,input().split())
    for p in range(i-1,j):
        num[p] = k
    
print(' '.join(map(str,num)))