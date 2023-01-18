def knapsack(items, max_weight):
    # 최대 가치를 저장할 1차원 배열 생성
    dp = [0 for _ in range(max_weight + 1)]
    
    for item in items:
        for j in range(max_weight, 0, -1):
            if item[0] <= j:
                dp[j] = max(dp[j], dp[j - item[0]] + item[1])
    return dp[max_weight]

# 테스트 코드
items = []
n , max_weight = map(int,input().split())
for _ in range(n):
    a,b = map(int,input().split())
    items.append([a,b])
print(knapsack(items, max_weight)) 