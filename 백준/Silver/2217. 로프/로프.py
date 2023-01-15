#Silver IV
N = int(input())
Rope = []

for i in range(N):
    Rope.append(int(input()))

Rope.sort(reverse=True)

for i in range(1,N+1):
    Rope[i-1] = Rope[i-1]*i

print(max(Rope))