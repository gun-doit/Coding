#Gold V

N = int(input())
crain = list(map(int,input().split()))
M = int(input())
box_weight = list(map(int,input().split()))
ans = 0

crain.sort()
box_weight.sort(reverse=True)

if box_weight[0] > crain[-1]:
    ans = -1

else:
    while len(box_weight) != 0:
        for i in crain:
            for j in box_weight:
                if i >= j:
                    box_weight.remove(j)
                    break
        ans+=1

print(ans)