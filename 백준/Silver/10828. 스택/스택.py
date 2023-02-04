#Silver IV  
import sys
input = sys.stdin.readline
N = int(input())
cmd = []
stack = []

for _ in range(N):
    value = -1
    cmd = list(input().split())

    if cmd[0] == 'push':
        stack.append(cmd[1])
    else:
        match (cmd[0]):
            case 'top':
                if not stack: print(-1)
                else: print(stack[-1])
            case 'size':
                print(len(stack))
            case 'empty':
                if not stack: print(1)
                else: print(0)
            case 'pop':
                if not stack: print(-1)
                else:
                    print(stack[-1])
                    stack.pop()

