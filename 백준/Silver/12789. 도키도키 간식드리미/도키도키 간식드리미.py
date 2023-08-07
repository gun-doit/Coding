import sys
input = sys.stdin.readline
N = int(input())
line = list(map(int, input().split()))
pos = 0
cnt = 1

stack = []

def isEmpty(l):
    if len(l) == 0:
        return 1
    else:
        return 0


while not isEmpty(line):
    if line[0] == cnt:
        line.pop(0)
        cnt+=1
        
    elif not isEmpty(stack) and stack[-1] == cnt:
        stack.pop()
        cnt+=1
        
    else:
        stack.append(line.pop(0))

while not isEmpty(stack):
    if stack[-1] == cnt:
        stack.pop()
        cnt+=1
    else:
        break
    
if cnt - 1 == N:
    print("Nice")
else:
    print('Sad')