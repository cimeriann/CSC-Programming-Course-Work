def sumDigits(n):
    remainder = 0
    sum = 0
    while n > 0:
        remainder = n % 10
        sum += remainder
        n = n // 10
    return sum

userDigit = eval(input("Enter a number: "))
print(f"The sum of all the digits in {userDigit} is ", sumDigits(userDigit))