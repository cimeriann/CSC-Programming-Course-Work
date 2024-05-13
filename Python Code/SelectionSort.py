lst = [2, 9, 3, 5, 7, 11, 1, 8, 10]

# def returnSmallest(lst):

#     return smallest

def selectionSort(lst):
    for i in range(len(lst) - 1):
        currentMin = lst[i]
        currentMinIndex = i
        for j in range(i + 1, len(lst)):
            if currentMin > lst[j]:
                currentMin = lst[j]
                currentMinIndex = j
        if currentMinIndex != i:
            lst[currentMinIndex] = lst[i]
            lst[i] = currentMin
    return lst
print(selectionSort(lst))
    
            
