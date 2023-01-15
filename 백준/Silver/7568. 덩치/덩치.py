#Silver V

N : int = int(input())
People = []

for i in range(N):
    People_Data = list(map(int, input().split()))
    People.append(People_Data)
    
for me in People:
    rank = 1
    for other in People:
        if(me[0] < other[0] and me[1] < other[1]): rank+=1
    print(rank)