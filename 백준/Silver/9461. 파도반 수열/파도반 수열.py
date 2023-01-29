#Silver III
T = int(input())
dp = [1,1,1,2]

for i in range(4,100):
    dp.append(dp[i-3] + dp[i-2])

for _ in range(T):
    Q = int(input())
    print(dp[Q-1])