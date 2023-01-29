#Silver I
n = int(input())
juice = [0]
for _ in range(n):
    juice.append(int(input()))

dp = [0]
dp.append(juice[1])
if n > 1: dp.append(juice[1] + juice[2])

for i in range(3,n+1):
    dp.append(max(dp[i-1], dp[i-3] + juice[i-1] + juice[i], juice[i] + dp[i-2]))

print(dp[-1])