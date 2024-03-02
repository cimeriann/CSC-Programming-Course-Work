import random
number1 : int = random.randint(0, 9)
number2 : int  = random.randint(0, 9)

response : int = eval(input(f"What is the result of {number1} and {number2}: "))

correct_result : int = number1 + number2

print(correct_result == response)
if correct_result == response:
    print("Correct!")
else:
    print("Wrong answer")

score = 100
if score > 90:
    score += (3/100 * score)

print(score)