#Gold V

N = int(input())
graph = [[] for _ in range(N+1)]
isVisited = [False] * (N+1)
for i in range(1,N+1):
    graph[int(input())].append(i)

ans = set()

def dfs(v, stack):
    for i in graph[v]:
        if isVisited[i]:
            while stack:
                a = stack.pop()
                ans.add(a)
                if i == a:
                    break
            return
        isVisited[i] = True
        dfs(i,stack+[i])
        isVisited[i] = False

for i in range(1,N+1):
    dfs(i,[])

ans = sorted(list(ans))
print(len(ans), *ans, sep='\n')