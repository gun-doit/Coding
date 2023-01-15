music = list(map(int, input().split()))

mixed = 0
back = music[0]
for i in music[1:]:
    if abs(back-i) != 1:
        mixed = 1
        break
    back = i
    
if(mixed == 1):print('mixed')
elif(back == 8):print('ascending')
else:print('descending')