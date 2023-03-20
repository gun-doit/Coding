N = int(input())
K = int(input())
disk = [0 for i in range(N+1)]

for k in range(2,N+1):
  if disk[k] == 0:
    for t in range(k,N+1,k):
      if t% k == 0:
        disk[t] = max(disk[t],k)
ans = 0
for i in disk:
  if i <= K:
    ans +=1
  

print(ans-1)
