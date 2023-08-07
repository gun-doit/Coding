import sys
input = sys.stdin.readline
stack = []

def isEmpty():
    if len(stack) == 0:
        return 1
    else:
        return 0

for i in range(int(input())):
    cmd = list(map(int,input().split()))
    
    if cmd[0] == 1:
        stack.append(cmd[1])
    elif cmd[0] == 2:
        if isEmpty():
            print(-1)
        else: 
            top = stack.pop()
            print(top)
    
    elif cmd[0] == 3:
        print(len(stack))
    
    elif cmd[0] == 4:
        print(isEmpty())
    
    else:
        if isEmpty():
            print(-1)
        else:
            print(stack[-1])