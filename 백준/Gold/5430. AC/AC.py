import sys
from collections import deque
input = sys.stdin.readline

T = int(input())
for _ in range(T):
    func = input().rstrip().replace('RR','')
    n = int(input())
    try:
        array = list(map(int,input().rstrip()[1:-1].split(',')))
        deq = deque(array)
    except:
        deq = deque()
    turn = False
    error = 0
    
    for i in range(len(func)):
        if func[i] == 'R':
            if turn == True: turn = False
            else: turn = True
        else:
            if len(deq) == 0:
                print('error')
                error = 1
                break
            else:
                if turn:
                    deq.pop()
                else:
                    deq.popleft()

    ans = []

    if error == 0:
        while len(deq) != 0:
            if turn == True:
                ans.append(deq.pop())
            else:
                ans.append(deq.popleft())
        print('['+ ','.join(map(str, ans)) + ']')