#Bronze II

time : list = [300,60,10]
count : list = [0,0,0]
cook_time :int = int(input())
for i in range(0,3):
    k = cook_time//time[i]
    if(cook_time < 10 or cook_time == 0): break
    if(k > 0):
        cook_time-= k*time[i]
        count[i] = k
        
if(cook_time < 10 and cook_time > 0): print(-1)
else:
    for i in count:
        print("{0} ".format(i), end="")