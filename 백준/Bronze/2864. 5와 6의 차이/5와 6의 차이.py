#Bronze II
A,B = map(str,input().split())
C : list = [2,3,4,5,6]
print(int(A.replace("6","5")) + int(B.replace("6","5")))
print(int(A.replace("5","6")) + int(B.replace("5","6")))