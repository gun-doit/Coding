#X 게임 횟수
#Y 이긴 게임
#Z 승률
X, Y = map(int,input().split())
Z = (100*Y) // X

left = 0
right = X
res = X

if Z >= 99:
    print(-1)

else:
    while left <= right:
        mid = (left + right) // 2
        if (100*(Y+mid)) // (X+mid) > Z:
            res = mid
            right = mid - 1
        else:
            left = mid + 1
    
    print(res)