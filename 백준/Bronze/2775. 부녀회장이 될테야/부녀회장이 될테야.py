for i in range(int(input())):
    building = int(input())
    unit = int(input())
    floor = [x for x in range(1,unit+1)]
    
    for k in range(building):
        for v in range(unit,1,-1):
            floor[v-1] = sum(floor[:v])
    
    print(floor[-1])
    