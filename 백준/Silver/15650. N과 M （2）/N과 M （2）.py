from itertools import combinations

N, M = map(int,input().split())
Num_List = []
for i in range(1,N+1):
    Num_List.append(i)
    
Ans = list(combinations(Num_List,M))

for i in Ans:
    for j in i:
        print(j, end=" ")
    print()