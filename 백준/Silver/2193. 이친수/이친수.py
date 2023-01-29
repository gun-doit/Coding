#Silver III

N = int(input())
dp = [0, 1, 1, 2]

for i in range(4,N+1):
    dp.append(dp[i-1] + dp[i-2])
    
print(dp[N])


'''
1
10
100 101
1000 1010 1001
10000 10100 10010 10001 10101 
'''