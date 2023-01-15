#Gold V

Vowel = ["a","e","i","o","u"]
vowel1 = "aeiou"
L, C = map(int, input().split())
key_list = list(map(str,input().split()))

key_list.sort()

def make_key(key,n,vowel,cons):
    if len(key) == L:
        if vowel>=1 and cons>=2:
            print(key)
        return
    if n == C: return
    
    append_key = key + key_list[n]
    if key_list[n] in vowel1: make_key(append_key,n+1,vowel+1,cons)
    else: make_key(append_key,n+1,vowel,cons+1)
    make_key(key,n+1,vowel,cons)
    
make_key("",0,0,0)