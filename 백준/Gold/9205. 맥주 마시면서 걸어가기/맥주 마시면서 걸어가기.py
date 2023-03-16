from collections import deque
T = int(input())

def readinput():
    n = int(input())
    Mart = []

    House = list(map(int,input().split()))
    for _ in range(n):
        Mart.append(list(map(int,input().split())))
    Pentaport = list(map(int,input().split()))

    return solution(House,Mart,Pentaport,n)

def Manhatton(a,b):
    return abs(a[0] - b[0]) + abs(a[1]-b[1])

def solution(House,Mart,Pentaport,n):
    isVisited = [0 for _ in range(n)]
    q = deque()
    q.append(House)
    ans = False

    while q:
        v = q.popleft()
        if Manhatton(v,Pentaport) <= 1000:
            ans = True
            break

        for i in range(n):
            if Manhatton(v,Mart[i]) <= 1000 and isVisited[i] == 0:
                isVisited[i] = 1
                q.append(Mart[i])
    return ans

for _ in range(T):
    if readinput():
        print('happy')
    else:
        print('sad')