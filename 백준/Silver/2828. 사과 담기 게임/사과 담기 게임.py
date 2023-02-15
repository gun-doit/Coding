#Silver V

N, box = map(int, input().split())
C = int(input())
apples = [int(input()) for _ in range(C)]
position = 1
ans = 0

for i in apples:
    if position <= i <= position+box-1: continue
    if position < i:
        ans += abs(position-i) -(box-1)
        position = position + abs(position-i) -(box-1)
    else:
        ans += abs(position-i)
        position -= abs(position-i)

print(ans)