#Gold V
#문제 
#n가지의 동전, k원을 만들고 싶다. 구성이 같지만 순서가 다르면 같은 경우!
#풀이
#1. 정렬후


#입력
n, k = map(int, input().split())
coin = [int(input()) for _ in range(n)]
coin.sort()
dp = [0 for _ in range(k+1)]
dp[0] = 1
for i in coin:
    for j in range(1, k+1):
        if j - i >= 0:
            dp[j] += dp[j-i]

print(dp[-1])
