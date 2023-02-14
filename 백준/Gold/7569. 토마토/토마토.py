#Gold V
from collections import deque

M,N,H = map(int, input().split())
box = [[] for _ in range(H)]
for i in range(H):
    for j in range(N):
        box[i].append(list(map(int, input().split())))

dx = [0,1,0,-1]
dy = [1,0,-1,0]
dh = [-1,1]

ans = 0
q = deque()

for h in range(H):
    for i in range(N):
        for j in range(M):
            if box[h][i][j] == 1:
                q.append([h,i,j])


def bfs():
    while q:
        u , x, y = q.popleft()
        for i in range(4):
            nx, ny = dx[i]+x, dy[i]+y
            if 0 <= nx < N and 0 <= ny < M and  u >= 0 and u < H and box[u][nx][ny] == 0:
                box[u][nx][ny] = box[u][x][y] + 1
                q.append([u,nx,ny])
        for h in range(2):
            nh = dh[h]+u
            if 0 <= x < N and 0 <= y < M and 0 <= nh < H and box[nh][x][y] == 0:
                box[nh][x][y] = box[u][x][y] + 1
                q.append([nh,x,y])

bfs()
for h in range(H):
    for i in range(N):
        if 0 in box[h][i]:
            print(-1)
            exit(0)
        ans = max(ans,max(box[h][i]))
if ans == 1: print(0)
else: print(ans-1)