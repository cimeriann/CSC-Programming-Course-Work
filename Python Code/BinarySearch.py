def binarySearch(sortedArray, target: int) -> int:
    start = 0
    end = int(len(sortedArray) - 1)
    while end >= start:
        mid = (start + end) // 2
        if  target == sortedArray[mid]:
            print("Target found")
            return mid
        elif sortedArray[mid] > target:
            end = mid - 1
        else:
            start = mid + 1
    return -1

print(binarySearch([1, 2, 3, 4, 5,6, 7, 8, 9, 10], 9))