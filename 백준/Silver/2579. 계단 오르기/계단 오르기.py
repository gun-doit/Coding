#Silver III
count = int(input())
Stairs = [0 for i in range(301)]
dp = [0 for i in range(301)]
for i in range(count):
    Stairs[i] = int(input())

dp[0] = Stairs[0]
dp[1] = Stairs[0] + Stairs[1]
dp[2] = max(Stairs[1] + Stairs[2], Stairs[0] + Stairs[2])

for i in range(3, count):
    dp[i] = max(dp[i-3] + Stairs[i-1] + Stairs[i], dp[i-2] + Stairs[i])
print(dp[count-1])