#Silver I
n = int(input())
dp = [[0] for _ in range(n)]

for i in range(n):
    dp[i] = list(map(int,input().split()))

for i in range(1,n):
    for j in range(i+1):
        if j == 0:
            dp[i][j] += dp[i-1][j]
        elif i == j:
            dp[i][j] += dp[i-1][j-1]
        else:
            dp[i][j] += max(dp[i-1][j-1], dp[i-1][j])

print(max(dp[n-1]))