
def binary_serach(arr, value):
    first, last = 0, len(arr)-1
    
    while first <= last:
        mid = (first + last) // 2
        if arr[mid] == value:
            return 1
        if arr[mid] > value:
            last = mid-1
        else:
            first = mid+1
    
    return 0


N = int(input())
Number = list(map(int,input().split()))
M = int(input())
Check = list(map(int,input().split()))


Number.sort()
for i in Check:
    print(binary_serach(Number, i))