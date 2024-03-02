def reverse(n : int) -> int:
    remainder = 0
    sum = 0
    length = len(str(n))
    while n > 0:
        remainder = n % 10
        sum += remainder * (10**(length-1))
        n = n // 10
        length -= 1
    return sum

def isPalindrome(n: int):
    if n == reverse(n):
        return True
    return False

count = 0
for num in range(11, 1000):
    # print(num if isPalindrome(num) else "")
    if isPalindrome(num):
        print(num, end=" ")
        count += 1
        if count % 10 == 0:
            print()
print()
print(f"There are {count} palindromes less than 100000")