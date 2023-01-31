#Silver I

def solution(applicant):
    applicant.sort()
    ans = 1
    cmp = applicant[0][1]
    for i in range(1, len(applicant)):
        if cmp > applicant[i][1]:
            ans+=1
            cmp = applicant[i][1]
    return ans

for _ in range(int(input())):
    n = int(input())
    applicant = [[] for _ in range(n)]

    for i in range(n):
        a, b = map(int,input().split())
        applicant[i].append(a)
        applicant[i].append(b)

    print(solution(applicant))
