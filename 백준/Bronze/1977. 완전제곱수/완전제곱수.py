#Bronze II
min = int(input())
max = int(input())
ans = []
i = int(min ** (1/2))

while i ** 2 <= max:
    if min <= i ** 2 and i ** 2 <= max:
        ans.append(i**2)
    i+=1

if len(ans) != 0:
    print(sum(ans))
    print(ans[0])
else:
    print(-1)