#Silver III
from itertools import product

N, M = map(int,input().split())

Ans = list(product(range(1,N+1),repeat=M))

for i in Ans:
    for j in i:
        print(j,end=" ")
    print()