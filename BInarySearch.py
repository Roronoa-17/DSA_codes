
arr = [1, 2, 3, 4, 6, 8, 10]
target = 0
start = 0
end = lenb0``
result = -1
while start < end:
    mid = int((start+end)/2)
    
    if target == arr[mid]:
        result = mid
        break
    elif target > arr[mid]:
        start = mid + 1
    elif target < arr[mid]:
        end = mid - 1

print(result)
     