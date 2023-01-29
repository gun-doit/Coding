#Silver I

def solution(Sticker, n):
    dp = Sticker
    dp[0][1] += dp[1][0]
    dp[1][1] += dp[0][0]

    if n > 2:
        for i in range(2,n):
            dp[0][i] += max(dp[1][i-1], dp[1][i-2])
            dp[1][i] += max(dp[0][i-1], dp[0][i-2])

    return max(dp[0][n-1], dp[1][n-1])

for _ in range(int(input())):
    Sticker = [[],[]]
    n = int(input())
    for i in range(2):
        Sticker[i] = list(map(int,input().split()))
    if n == 1:
        print(max(Sticker[0][0], Sticker[1][0]))
    else: print(solution(Sticker, n))
    
