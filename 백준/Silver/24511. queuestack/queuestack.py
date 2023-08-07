import sys
from collections import deque
input = sys.stdin.readline

N = int(input()) #자료 구조의 갯수
QS = list(map(int, input().split()))
array = list(map(int, input().split()))
queue = [array[i] for i in range(N-1,-1,-1) if QS[i] == 0]
M = int(input())
C = list(map(int, input().split()))
result = []

for num in C:
    queue.append(num)
print(*queue[:M])

