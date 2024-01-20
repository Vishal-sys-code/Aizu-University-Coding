# Using O(N) operations
n = int(input())
arr = list(map(int, input().split()))
sum_val = sum(arr)
min_val = arr[0]
max_val = arr[0]

for i in range(1, n):
    if min_val > arr[i]:
        min_val = arr[i]
    if max_val < arr[i]:
        max_val = arr[i]

print(f"{min_val} {max_val} {sum_val}")