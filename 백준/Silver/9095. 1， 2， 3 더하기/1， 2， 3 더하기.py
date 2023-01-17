#Silver III

T = int(input())
dp = [0,1,2,4]

def DP(n):
  result = dp[n-1] + dp[n-2] + dp[n-3]
  dp.append(result)

for i in range(4,12):
  DP(i)

for _ in range(T):
  n = int(input())
  print(dp[n])
