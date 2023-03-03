from collections import deque

n = int(input())
d = deque()
count = -1
for i in range(10):
    d.append(i)

while d:
    now = d.popleft()
    count += 1
    
    if count == n:
        print(now)
        exit()
    
    for i in range(now%10):
        d.append(now*10 +i)
print(-1)