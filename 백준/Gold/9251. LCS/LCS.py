#Gold V
#LCS(촤장 공통 부분 수열) 찾기

#풀이방법
#1. 배열을 만들고, 체크
#     a   b   c
#   b 0   1   0
#   c 0   1   2
#   a 1   1   2

#입력
word_1 = input()
word_2 = input()

#배열
ans = [[0] * (len(word_2) + 1) for _ in range(len(word_1)+1)]

for i in range(1,len(word_1)+1):
    for j in range(1, len(word_2)+1):
        if word_1[i - 1] == word_2[j - 1]:
            ans[i][j] = ans[i-1][j-1] + 1
        else:
            ans[i][j] = max(ans[i][j-1], ans[i-1][j])
print(ans[-1][-1])