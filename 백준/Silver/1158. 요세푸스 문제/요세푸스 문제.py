#Silver IV

N,K = map(int, input().split())
idx = -1
people = [i for i in range(1,N+1)]
ans = []
while len(people) != 0:
    idx = (idx+K)%len(people)
    ans.append(people[idx])
    people.pop(idx)
    idx-=1

print('<', end="")
for i in ans:
    if i == ans[-1]: print(i,end=">")
    else: print(i, end=", ")