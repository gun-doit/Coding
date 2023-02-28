#Bronze I
from collections import deque


while True:
    n = list(map(int,input()))
    if n[0] == 0: break
    ans = 'yes'
    dq = deque(list(map(int, n)))
    while len(dq) >= 2:
        l = dq.popleft()
        r = dq.pop()
        if l != r: ans = 'no'
    print(ans)