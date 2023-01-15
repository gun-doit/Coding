#Bronze II
JOI_money = [500,100,50,10,5,1]

change : int = 1000 - int(input())

cnt : int = 0;
for i in JOI_money:
    k : int = change//i
    if(change % i == 0):
        cnt+=k
        break
    if(change > i):
        change -= i*k
        cnt+=k
print(cnt)