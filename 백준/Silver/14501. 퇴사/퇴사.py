#Silver III
import time

N = int(input())
T = [0 for _ in range(N+1)]
P = [0 for _ in range(N+1)]
max_value = 0
for i in range(1,N+1):
    T[i], P[i] = map(int, input().split())

def solution(idx, day, money):
    global max_value
    if idx == N+1:
        if max_value < money: max_value = money
        return
    if idx + T[idx] <= N+1:
        solution(idx+T[idx],day+T[idx],money+P[idx])
    solution(idx+1, day+1, money)

solution(1, 1, 0)
print(max_value)