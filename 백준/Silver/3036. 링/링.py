#Silver Iv
import math
N :int = int(input())
circle = list(map(int,input().split()))

for i in circle[1:N]:
    k = math.gcd(circle[0],i)
    print("{0}/{1}".format(int(circle[0]/k),int(i/k)))