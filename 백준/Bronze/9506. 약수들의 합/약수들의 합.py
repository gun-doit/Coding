while True:
    measure = []
    n = int(input())
    if n == -1: exit()
    
    for i in range(1, n):
        if n % i == 0: measure.append(i)
        
    if sum(measure) == n:
        print(n, end= " = ")
        print(' + '.join(map(str,measure)))
    else: print('{0} is NOT perfect.'.format(n))