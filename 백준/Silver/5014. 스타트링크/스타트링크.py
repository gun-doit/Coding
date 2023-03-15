from collections import deque

F,S,G,U,D = map(int,input().split())
building = [0] * (F+1)
isVisited = [0] * (F+1)
if S == G:
    print(0)
    exit()

def bfs(v):
    global F,S,G,U,D
    q = deque([v])
    while q:
        v = q.popleft()
        isVisited[v] = 1
        if v == G:
            return building[v]
        for next_v in [v+U,v-D]:
            if 1 <= next_v <= F and not building[next_v] and not isVisited[next_v]:
                building[next_v] = building[v] + 1
                isVisited[next_v] = 1
                q.append(next_v)
                
ans = bfs(S)
if ans == None:
    print('use the stairs')
else:
    print(ans)