#Silver III
import sys
input = sys.stdin.readline

N = int(input())
road = list(map(int,input().split()))
gasPrice = list(map(int, input().split()))
maxGas = sum(gasPrice)
dp = []
drive = 0
minGas = 10001

for i in range(N-1):
    drive += road[i]
    if minGas > gasPrice[i]: minGas = gasPrice[i]
    if i == 0:
        dp.append(gasPrice[0]*drive)
    elif i == 1:
        dp.append(min(dp[0]+gasPrice[1]*road[1],gasPrice[0]*drive))
    else:
        dp.append(dp[i-1]+(road[i]*minGas))


print(dp[-1])