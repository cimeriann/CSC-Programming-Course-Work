def getPentagonalNumber(n) -> int:
    return int((n*(3*n - 1))/2)

count : int = 1
for i in range(1, 101):
    print(int(getPentagonalNumber(i)), end=' ') 
    if (i % 10) == 0:
        print()

while count < 101:
    print(int(getPentagonalNumber(count)), end=' ')
    if count % 10 == 0:
        print()
    count +=1