#Silver III
import math

def distanceAB(ax, ay,planet):
    if math.sqrt(((ax-planet[0])**2 + (ay-planet[1])**2)) <= planet[2]: return 1
    else: return 0

for _ in range(int(input())):
    x1, y1, x2, y2 = map(int,input().split())
    n = int(input())
    ans = 0
    for _ in range(n):
        planet = list(map(int,input().split()))
        if distanceAB(x1,y1,planet) and not distanceAB(x2,y2,planet): ans+=1
        if not distanceAB(x1,y1,planet) and distanceAB(x2,y2,planet): ans+=1

    print(ans)
    
