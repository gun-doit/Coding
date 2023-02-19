N = int(input())


def ad(x):
    for i in range(x):
        if row[x] == row[i] or abs(row[x]-row[i]) == x - i:
            return False
    return True

def dfs(x):
    global ans
    if x == N:
        ans+=1
    else:
        for i in range(N):
            row[x] = i
            if ad(x):
                dfs(x+1)

row = [0] * N
ans = 0
dfs(0)
print(ans)