N : int = int(input())

def turn(k : int):
    l = len(str(k))
    n = k % 10
    k = k //10
    k += n*(10**(l-1))
    return k

turnN = turn(N);
sum = N
while(N != turnN):
    sum += turnN
    turnN = turn(turnN)
    
print(sum)