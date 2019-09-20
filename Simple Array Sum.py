n = int(input())
array=list(map(int, input().split()))
sum = 0
for x in range(n):
    sum += array[x]
print(sum)
