#Bronze II
import re
N : int = int(input())
for i in range(N):
    word = input()
    word = re.split('[+|=]',word)
    
    if(word[0] == 'P'): print("skipped")
    else: print(int(word[0]) + int(word[1])) 