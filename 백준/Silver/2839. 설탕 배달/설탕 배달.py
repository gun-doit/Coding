N = int(input())
cnt = 0

if N % 5 == 0:
    cnt = N // 5

else:
    while True:
        if N < 0:
            cnt = -1
            break
        if N % 5 == 0:
            cnt += N // 5
            break
        else:
            N -= 3
            cnt += 1
            
print(cnt)