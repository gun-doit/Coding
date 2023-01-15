x = int(input())
n = 1
cnt = 1

while n < x:
    cnt += 1
    n += cnt

ans = x - (n - cnt)
#홀수
if cnt % 2 != 0:
    print("{0}/{1}".format(cnt+1-ans, ans))
    
#짝수
else:
    print("{0}/{1}".format(ans, cnt+1-ans))