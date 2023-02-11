#Sivler II
#DFS와 BFS
from collections import deque

N, M, V = map(int, input().split())
Graph = [[] for _ in range(N+1)]

for i in range(M):
    g, v = map(int,input().split())
    Graph[g].append(v)
    Graph[v].append(g)

visited = [0 for _ in range( N+1 )]

dfs = []
bfs = []
def DFS(i):
    if visited[i] == 1: return
    visited[i] = 1
    dfs.append(i)
    for k in Graph[i]:
        DFS(k)

def BFS(Graph, node):
    q = deque([node])
    visited[node] = 1

    while q:
        v = q.popleft()
        bfs.append(v)
        for i in Graph[v]:
            if not (visited[i]):
                q.append(i)
                visited[i] = 1

def ans(function, ans):
    print(' '.join(map(str,ans)))

for i in range(1,N+1):
    Graph[i].sort()

ans(DFS(V), dfs)
visited = [0 for _ in range( N+1 )]
ans(BFS(Graph,V), bfs)
