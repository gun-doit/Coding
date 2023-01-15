import sys
T = int(input())
for i in range(T):
    num, array = input().split()
    text = ''
    for v in array:
        text += int(num)*v
    print(text)