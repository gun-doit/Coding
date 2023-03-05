ans = ['' for _ in range(15)]
for _ in range(5):
    w = input()
    for i in range(len(w)):
        ans[i]+=w[i]
        
for i in ans:
    print(i,end='')
        