def aVeryBigSum(ar):
    Sum=0
    for i in range (len(ar)):
        Sum+=ar[i]
    return Sum


ar_count = int(input())
ar = list(map(int, input().rstrip().split()))
result = aVeryBigSum(ar)
print(result)
