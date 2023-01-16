#Silver I
from itertools import permutations

N = int(input())
num_list = list(map(int,input().split()))
mul = ['+','-','*','/']
mul_list = []
cnt = list(map(int,input().split()))

for j in range(4):
    for i in range(int(cnt[j])):
        mul_list.append(mul[j])
ans = []

comb = list(set(permutations(mul_list, len(mul_list))))

for i in comb:
    cal = num_list[0]

    for j in range(0,N-1):
        if i[j] == "+":
            cal += num_list[j+1]
        elif i[j] == "-":
            cal -= num_list[j+1]
        elif i[j] == "*":
            cal *= num_list[j+1]
        elif i[j] == "/":
            if cal < 0: cal = -(-cal //num_list[j+1])
            else: cal //= num_list[j+1]
    ans.append(cal)

print(max(ans))
print(min(ans))