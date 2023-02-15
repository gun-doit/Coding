#Gole IV

word = input()
bomb = input()

lastbomb = bomb[-1]
stack = []

for i in word:
    stack.append(i)
    if ''.join(stack[-len(bomb):]) == bomb:
        for _ in range(len(bomb)):
            stack.pop()

if stack:
    print(''.join(stack))
else:
    print('FRULA')