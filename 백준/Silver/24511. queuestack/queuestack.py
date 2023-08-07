import sys
from collections import deque
input = sys.stdin.readline

N = int(input()) #자료 구조의 갯수
QS = list(map(int, input().split()))
array = list(map(int, input().split()))
deq = deque(array[i] for i in range(N) if QS[i] == 0)
M = int(input())
C = list(map(int, input().split()))
result = []

for num in C:
    deq.appendleft(num)
    result.append(deq.pop())
print(*result)
