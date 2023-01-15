#Bronze II
N : int = int(input())

ans = 0
def solution(n) -> int: 
    sum : int = n
    for i in list(str(n)):
        sum += int(i)
    return sum

for i in range(1, N):
    if(solution(i) == N):
        ans = i
        break
    
print(ans)