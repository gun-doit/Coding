#Gold IV
from collections import deque
import copy
N, M = map(int, input().split())
Origin = [list(map(int, input().split())) for _ in range(N)]
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]
ans = 0

def bfs():
    global ans
    q = deque()
    Map = copy.deepcopy(Origin)

    for i in range(N):
        for j in range(M):
            if Map[i][j] == 2:
                q.append([i,j])

    while len(q) > 0:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < N and 0 <= ny < M:
                if Map[nx][ny] == 0:
                    Map[nx][ny] = 2
                    q.append([nx, ny])

    cnt = 0
    for i in range(N):
        cnt += Map[i].count(0)

    ans = max(ans,cnt)

def MakeWall(cnt):
    if cnt == 3:
        bfs()
        return

    for i in range(N):
        for j in range(M):
            if Origin[i][j] == 0:
                Origin[i][j] = 1
                MakeWall(cnt+1)
                Origin[i][j] = 0

MakeWall(0)
print(ans)