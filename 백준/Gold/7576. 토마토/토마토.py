#Gold V
from collections import deque

M,N = map(int, input().split())
box = [list(map(int, input().split())) for _ in range(N)]
dx = [0,1,0,-1]
dy = [1,0,-1,0]
ans = 0
q = deque()

for i in range(N):
    for j in range(M):
        if box[i][j] == 1:
            q.append([i,j])

def bfs():
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx, ny = dx[i]+x, dy[i]+y
            if 0 <= nx < N and 0 <= ny < M and box[nx][ny] == 0:
                box[nx][ny] = box[x][y] + 1
                q.append([nx,ny])

bfs()
for i in box:
    if 0 in i:
        print(-1)
        exit(0)
    ans = max(ans,max(i))
print(ans-1)