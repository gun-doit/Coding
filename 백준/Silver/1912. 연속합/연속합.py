#Silver II
max = -100000001
value = 0
n = int(input())

sequence = list(map(int, input().split()))

for i in sequence:
    value += i
    if max < value: max = value
    if value < 0: value = 0




print(max)