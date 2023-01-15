for T in range(int(input())):
    H, W, N = map(int, input().split())
    
    if N % H == 0:
        ans = H*100 + N // H
    else:
        ans = N%H*100 + N//H +1
    print(ans)   