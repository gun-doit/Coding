#Silver V
S = int(input())
ans = 1
while ans * (ans+1) / 2 <= S:
    ans += 1
print(ans-1)