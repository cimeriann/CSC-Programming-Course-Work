import random
def rollDice():
    die: int = random.randint(1, 6)
    return die
# print(rollDice())

def getSumOfNumbersRolledOnEachDie():
    die_1 = rollDice()
    die_2 = rollDice()
    sum: int = die_1 + die_2
    return die_1, die_2, sum
# print(getSumOfNumbersRolledOnEachDie())

def main():
    while True:
        die_1, die_2, sum = getSumOfNumbersRolledOnEachDie()
        print(f"You rolled {die_1} + {die_2} = {sum}")
        if sum == 2 or sum == 3 or sum == 12:
            print("You lose")
            break
        elif sum == 7 or sum == 11:
            print("You win")
            break
        else:
            print(f"point is {sum}")
            point = sum
            while True:
                # point = 0
                die_1, die_2, sum = getSumOfNumbersRolledOnEachDie()
                print(f"You rolled {die_1} + {die_2} = {sum}")
                if sum == 7:
                    print("You lose")
                    break
                elif sum == point:
                    print("You win")
                    break
            break


main()