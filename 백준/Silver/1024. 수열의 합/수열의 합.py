N,L = map(int,input().split())
ans = []
# x부터 시작한다고 가정
# x x+1... x+(L-1)
# L(x) + (1~L-1까지의 합) 이게 기본
# 너무 오랜마에 코딩해서 머리가 안돌아가
# 100까지 갈 수 있으니깐
# N = t*x + (1~t까지의 합)
# N = t*x + t(1+t)//2
# N - (1~t까지의 합) = t*x
# N - (t(t+1)//2) //t = x


def sum1tot(t):
    return t*(t+1)//2

for t in range(L,101):
    if (N - sum1tot(int(t))) % t == 0:
        buf = (N - sum1tot(t)) // t
        if buf < -1: break
        for i in range(buf+1,buf+1+t):
            ans.append(i)
        break

if ans == []:
    print(-1)
    exit()

else:
    print(' '.join(map(str,ans)))