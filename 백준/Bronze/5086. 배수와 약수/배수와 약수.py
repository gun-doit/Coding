#Bronze III
num : list [2]
while(True):
    num = list(map(int, input().split()))
    if num[0] == 0 and num[1] == 0: break
    else:
        if num[0] % num[1] == 0 : print("multiple")
        elif num[1] % num[0] == 0 : print("factor")
        else: print("neither")