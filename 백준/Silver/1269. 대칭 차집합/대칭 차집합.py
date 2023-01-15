#Silver IV
N, M = map(int,input().split())
sum = {}
A = set(map(int,input().split()))
B = set(map(int,input().split()))
sum = A & B
print(N+M-2*len(sum))