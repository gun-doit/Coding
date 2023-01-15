word = input().upper()
word_a = list(map(str,str(word)))
word_a = list(set(word_a))
word_cnt = []
max_idx = -1
ans = ''
for i in word_a:
    word_cnt.append(word.count(i))
    if max_idx < word.count(i): 
        max_idx = word.count(i)
        ans = i
if(word_cnt.count(max_idx) != 1):
    ans = '?'
print(ans)