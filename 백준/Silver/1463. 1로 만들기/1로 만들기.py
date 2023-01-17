#Silver III

X = int(input())

dp = [0,0,1,1]
if X > 2:
    for i in range(4,X+1):
        mul = []
        if i%3 == 0: mul.append(dp[i//3])
        if i%2 == 0: mul.append(dp[i//2])
        mul.append(dp[i-1])
        dp.append(min(mul)+1)
        
print(dp[X])