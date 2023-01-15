N = input()
num = list(map(int,input().split()))

num.sort()
if(N == 1): print(num*num)
else: print(num[0] * num[-1])